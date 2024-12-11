const API_KEY = '1888f4fbd97d8ebc42482a2d250f03ce';
const BASE_URL = 'https://api.themoviedb.org/3';
const JSON_SERVER_URL = 'http://localhost:3000';

// Função para carregar séries populares
async function loadPopularSeries() {
    const response = await fetch(`${BASE_URL}/tv/top_rated?api_key=${API_KEY}&language=pt-BR`);
    const data = await response.json();
    const carouselInner = document.getElementById('popular-series');

    data.results.forEach((series, index) => {
        const activeClass = index === 0 ? 'active' : '';
        const item = `
            <div class="carousel-item ${activeClass}">
                <img src="https://image.tmdb.org/t/p/w500${series.poster_path}" class="d-block w-100" alt="${series.name}">
                <div class="carousel-caption d-none d-md-block">
                    <h5>${series.name}</h5>
                    <p>${series.overview}</p>
                </div>
            </div>
        `;
        carouselInner.innerHTML += item;
    });
}

// Função para carregar novas séries
async function loadNewSeries() {
    const response = await fetch(`${BASE_URL}/tv/airing_today?api_key=${API_KEY}&language=pt-BR`);
    const data = await response.json();
    const newSeriesCards = document.getElementById('new-series-cards');

    data.results.slice(0,6).forEach((series) => {
        const card = `
            <div class="col-md-4 mb-3">
                <div class="card">
                    <img src="https://image.tmdb.org/t/p/w500${series.poster_path}" class="card-img-top" alt="${series.name}">
                    <div class="card-body">
                        <h5 class="card-title">${series.name}</h5>
                        <p class="card-text">${series.overview.substring(0, 100)}...</p>
                        <a href="#" class="btn btn-primary">Detalhes</a>
                    </div>
                </div>
            </div>
        `;
        newSeriesCards.innerHTML += card;
    });
}

// Função para carregar informações do autor
async function loadAuthorInfo() {
    const response = await fetch(`${JSON_SERVER_URL}/author`);
    const author = await response.json();
    const authorInfo = document.getElementById('author-info');

    authorInfo.innerHTML = `<h1>${author.name}</h1>
            <p><strong>Curso:</strong> ${author.course}</p>
            <p><strong>E-mail:</strong> <a href="mailto:${author.email}">${author.email}</a></p>
            <p><strong>Mini biografia:</strong> ${author.bio}</p>
            <p>
                <strong>Redes Sociais:</strong>
                <a href="${author.facebook}" target="_blank">Facebook</a> |
                <a href="${author.twitter}" target="_blank">Twitter</a> |
                <a href="${author.instagram}" target="_blank">Instagram</a>
            </p>
        `;
}

// Função para carregar séries favoritas
async function loadFavoriteSeries() {
    const favoriteSeriesCards = document.getElementById('favorite-series-cards');
    favoriteSeriesCards.innerHTML = ''; // Limpar o conteúdo anterior

    try {
        // Carregar o JSON local (simulando o arquivo favorite_series.json)
        const response = await fetch('favorite_series.json');  // Ou o caminho correto do seu JSON
        const data = await response.json();

        // Iterar sobre as séries favoritas e pegar detalhes da API do TMDB
        for (const favorite of data.favorite_series) {
            try {
                const seriesResponse = await fetch(`${BASE_URL}/tv/${favorite.tmdb_series_id}?api_key=${API_KEY}&language=pt-BR`);
                const series = await seriesResponse.json();

                // Criando o card para cada série
                const card = `
                    <div class="col-md-4 mb-3">
                        <div class="card">
                            <img src="https://image.tmdb.org/t/p/w500${series.poster_path}" class="card-img-top" alt="${series.name}">
                            <div class="card-body">
                                <h5 class="card-title">${series.name}</h5>
                                <p class="card-text">${series.overview ? series.overview.substring(0, 100) + '...' : 'Sem descrição disponível.'}</p>
                                <a href="#" class="btn btn-primary">Detalhes</a>
                            </div>
                        </div>
                    </div>
                `;

                // Adiciona o card no container de séries favoritas
                favoriteSeriesCards.innerHTML += card;
            } catch (error) {
                console.error('Erro ao carregar detalhes da série:', error);
            }
        }
    } catch (error) {
        console.error('Erro ao carregar o JSON de séries favoritas:', error);
    }
}

// Carregar dados ao inicializar
document.addEventListener('DOMContentLoaded', () => {
    loadPopularSeries();
    loadNewSeries();
    loadAuthorInfo();
    loadFavoriteSeries();
});



async function searchSeries(query) {
    try {
        const response = await fetch(`${BASE_URL}/search/tv?api_key=${API_KEY}&query=${encodeURIComponent(query)}&language=pt-BR`);
        if (!response.ok) {
            throw new Error('Erro ao buscar séries na API do TMDB');
        }
        const data = await response.json();
        return data.results; // Retorna os resultados da busca
    } catch (error) {
        console.error(error);
        return [];
    }
}

// Função para exibir os resultados da busca em cards
function displaySeries(series) {
    const resultsContainer = document.getElementById('search-results');
    resultsContainer.innerHTML = ''; // Limpar resultados anteriores

    if (series.length === 0) {
        resultsContainer.innerHTML = '<p class="col-12">Nenhuma série encontrada.</p>';
        return;
    }

    series.forEach(s => {
        const card = `
            <div class="col-md-4 mb-3">
                <div class="card">
                    <img src="https://image.tmdb.org/t/p/w500${s.poster_path}" class="card-img-top" alt="${s.name}">
                    <div class="card-body">
                        <h5 class="card-title">${s.name}</h5>
                        <p class="card-text">${s.overview ? s.overview.substring(0, 100) + '...' : 'Sem descrição disponível.'}</p>
                        <a href="detail.html?id=${s.id}" class="btn btn-primary">Ver Detalhes</a>
                    </div>
                </div>
            </div>
        `;
        resultsContainer.innerHTML += card;
    });
}

// Evento do botão de pesquisa
document.getElementById('search-btn').addEventListener('click', async () => {
    const query = document.getElementById('search-input').value.trim();
    if (query) {
        const series = await searchSeries(query);
        displaySeries(series);
    } else {
        alert("Por favor, insira um texto para pesquisar.");
    }
});

// Permitir pesquisa ao pressionar "Enter"
document.getElementById('search-input').addEventListener('keypress', (e) => {
    if (e.key === 'Enter') {
        document.getElementById('search-btn').click();
    }
});

// Função para obter o ID da série da query string
function getSeriesId() {
    const params = new URLSearchParams(window.location.search);
    return params.get('id');
}

// Função para buscar detalhes da série
async function fetchSeriesDetails(seriesId) {
    const response = await fetch(`${BASE_URL}/tv/${seriesId}?api_key=${API_KEY}&language=pt-BR`);
    return response.json();
}

// Função para buscar elenco da série
async function fetchSeriesCast(seriesId) {
    const response = await fetch(`${BASE_URL}/tv/${seriesId}/credits?api_key=${API_KEY}&language=pt-BR`);
    const data = await response.json();
    return data.cast;
}

async function saveFavoriteSeries(series) {
    await fetch(`${JSON_SERVER_URL}/favorites`, {
        method: 'POST',
        headers: { 'Content-Type': 'application/json' },
        body: JSON.stringify(series)
    });
    alert('Série marcada como favorita!');
}

// Função para exibir detalhes da série
function displaySeriesDetails(series) {
    document.getElementById('series-title').innerText = series.name;
    document.getElementById('series-poster').src = `https://image.tmdb.org/t/p/w500${series.poster_path}`;

    const seriesInfo = document.getElementById('series-info');
    seriesInfo.innerHTML = `
        <li class="list-group-item"><strong>Data de Lançamento:</strong> ${series.first_air_date}</li>
        <li class="list-group-item"><strong>Número de Temporadas:</strong> ${series.number_of_seasons}</li>
        <li class="list-group-item"><strong>Episódios:</strong> ${series.number_of_episodes}</li>
        <li class="list-group-item"><strong>Nota:</strong> ${series.vote_average}</li>
        <li class="list-group-item"><strong>Descrição:</strong> ${series.overview}</li>
    `;
}

// Função para exibir o elenco da série
function displaySeriesCast(cast) {
    const castCards = document.getElementById('cast-cards');
    castCards.innerHTML = '';

    cast.slice(0, 10).forEach(member => { // Mostrando até 10 membros do elenco
        const card = `
            <div class="col-md-3 mb-3">
                <div class="card">
                    <img src="https://image.tmdb.org/t/p/w500${member.profile_path}" class="card-img-top" alt="${member.name}">
                    <div class="card-body">
                        <h5 class="card-title">${member.name}</h5>
                        <p class="card-text">${member.character || 'Personagem não informado'}</p>
                    </div>
                </div>
            </div>
        `;
        castCards.innerHTML += card;
    });
}

(async () => {
    const seriesId = getSeriesId();
    if (!seriesId) {
        alert('Série não encontrada!');
        window.location.href = 'explorer.html'; // Redireciona para explorar
        return;
    }

    const seriesDetails = await fetchSeriesDetails(seriesId);
    displaySeriesDetails(seriesDetails);

    const seriesCast = await fetchSeriesCast(seriesId);
    displaySeriesCast(seriesCast);

    // Configurar botão de favoritos
    document.getElementById('favorite-btn').addEventListener('click', () => {
        saveFavoriteSeries({
            id: seriesDetails.id,
            name: seriesDetails.name,
            poster_path: seriesDetails.poster_path
        });
    });
})();