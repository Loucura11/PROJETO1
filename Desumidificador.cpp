
#include "Atuador.cpp"
using namespace std;

class Desumidificador : public Atuador {


public: // Ensure this is public

float limiarDesumidade;
  
  void setLimiarUmidadeDesumidificador(float x){
    this -> limiarDesumidade = x ;
  }
    void setConfiguracao(float comando) {
        if (comando >= limiarDesumidade) {
            ligar();
            setValor(3);
        } else if (comando <limiarDesumidade) {
            desligar();
            setValor(0);
        }
    }
};
