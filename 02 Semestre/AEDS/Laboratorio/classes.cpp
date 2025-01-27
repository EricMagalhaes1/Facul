#include <iostream>

using namespace std;

class Quadrado{

  private:
    int lado;

    public:
      Quadrado(int i): lado(i){}

      int getLado(){
        return lado;
      }

    int perimetro(){
      return 4*lado;
    }
    
    int area(){
      return lado * lado;
    }

    void print(){
      cout << "[Quadrado, lado = "<<this->lado <<"]"<< endl;
    }

};

int main(){

  Quadrado q(10);

  cout <<"Lado do quadrado" << q.getLado() <<endl;

  return 0;
}