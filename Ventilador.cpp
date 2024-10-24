
#include "Atuador.cpp"
using namespace std;

class Ventilador: public Atuador{
    public:

    float limiarTemperatura;
  
  void setLimiarTemperatura(float x){
    this -> limiarTemperatura = x ;
  }

bool setVelocidadeVent( float tempV){
    if( tempV <= limiarTemperatura){
        desligar();
        setValor(0);
        return true;

    }
    else if (tempV > limiarTemperatura && tempV <= (limiarTemperatura + 3) ){
        ligar();
        setValor(1);
        return true;

}
else if (tempV > (limiarTemperatura +3)  && tempV <= limiarTemperatura + 6){
    ligar();
     setValor(2);
    return true;
}
else if ( tempV > (limiarTemperatura + 6) ){
    setValor(3);
    
    return false;
}
 return false;
}
};







