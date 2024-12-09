#include <iostream>
#include <string>
using namespace std;

class Relogio{

  private:
    int hora;
    int minuto;
    int segundo;

  public:
   Relogio(int hora, int minutos, int segundos){
    this->hora = hora;
    this->minuto = minutos;
    this->segundo = segundos;
   }
   //getters
   int getHora(){
    return hora;
   }
   int getMinuto(){
    return minuto;
   }
   int getSegundo(){
    return segundo;
   }
   //setters
   void setHora(int hora){
    this->hora = hora;
   }


   void setHorario(int hora,int minuto,int segundo){
    this->hora = hora;
    this->minuto = minuto;
    this->segundo = segundo;
   }

   string getHorario(){
      string s;
      s = to_string(hora) + ":" + to_string(minuto) + ":" + to_string(segundo);

      return s;
   }

   void avancarHorario(){
    segundo ++;
    if(segundo == 60){
      segundo = 0;
      minuto++;
      if(minuto == 60){
        minuto = 0;
        hora++;
        if(hora == 24){
          hora = 0;
        }
      }
    }
   }
};

int main(){
  Relogio r(23,59,59);

  cout << "Teste: "<< r.getHorario() <<endl;
  r.avancarHorario();
  cout << "Teste: "<< r.getHorario() <<endl;


}