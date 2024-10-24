
#include "Atuador.cpp"
using namespace std;

class Umidificador: public Atuador{
//int alto = 250;
//int medio = 125;
//int baixo = 65;
//int off = 0;
public:

 float limiarUmidade;
  
  void setLimiarUmidadeUmidificador(float x){
    this -> limiarUmidade = x ;
  }

bool setConfiguracao( float intensidade){
    if(intensidade <limiarUmidade){
        ligar();
        setValor(3);
        return true;

    }
    else if (intensidade >=limiarUmidade && intensidade <limiarUmidade + 10){
        ligar();
        setValor(2);
        return true;

}
    else if (intensidade >= limiarUmidade + 10 && intensidade <limiarUmidade + 25){
        ligar();
        setValor(1);
        return true;
}
    else if ( intensidade >= limiarUmidade + 25){
        desligar();
        setValor(0);
        return true;
}
 return false;
}          
};