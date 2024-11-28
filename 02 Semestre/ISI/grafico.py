import pandas as pd
import matplotlib.pyplot as plt

# Dados
data = {
    "1": ["MDB", "PDT", "PP", "PL", "PT"],
    "Gastos_Totais": [20000, 55000, 50000, 300000, 200000],
    "2": ["Simone Tebet", "Ciro Gomes", "Jair Bolsonaro", "Jair Bolsonaro", "Luiz Inácio Lula"],
    "3": ["Transferências do Fundo Especial de Financiamento de Campanha", " despesas com pessoal", "Transferências Financeiras", "Transferências Financeiras", "Férias"],
    "4": ["Fundo de Financiamento de Campanha ", "Outros Recursos", "Outros Recursos", "Outros Recursos", "Fundo Partidário"]
}

df = pd.DataFrame(data)


gastos_partido = df.groupby("1")["Gastos_Totais"].sum()


gastos_candidato = df.groupby("2")["Gastos_Totais"].sum()

gastos_despesa = df.groupby("3")["Gastos_Totais"].sum()

gastos_receita = df.groupby("4")["Gastos_Totais"].sum()

# Exibir as tabelas
print("Gastos por Partido:")
print(gastos_partido)
print("\nGastos por Candidato:")
print(gastos_candidato)
print("\nGastos por Tipo de Despesa:")
print(gastos_despesa)
print("\nGastos por Fonte de Receita:")
print(gastos_receita)

plt.figure(figsize=(10, 6))

plt.subplot(2, 2, 1)
gastos_partido.plot(kind="bar", color="skyblue")
plt.title("Gastos por Partido")
plt.ylabel("Valor (R$)")
plt.xticks(rotation=0)

plt.subplot(2, 2, 2)
gastos_candidato.plot(kind="bar", color="orange")
plt.title("Gastos por Candidato")
plt.ylabel("Valor (R$)")
plt.xticks(rotation=0)

plt.subplot(2, 2, 3)
gastos_despesa.plot(kind="bar", color="green")
plt.title("Gastos por Tipo de Despesa")
plt.ylabel("Valor (R$)")
plt.xticks(rotation=90)

plt.subplot(2, 2, 4)
gastos_receita.plot(kind="bar", color="purple")
plt.title("Gastos por Fonte de Receita")
plt.ylabel("Valor (R$)")
plt.xticks(rotation=0)

plt.tight_layout()
plt.show()
