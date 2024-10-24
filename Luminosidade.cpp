
#include "Sensor.cpp"
using namespace std;

class Luminosidade: public Sensor {
  public:
  float limiarClaridade;
  
  void setLimiarClaridade(float claridade){
    this -> limiarClaridade = claridade ;
  }
 public:
  bool estaClaro(){
      if (generateRandomValue() >limiarClaridade){
        return false;
      }
     if (generateRandomValue() <= limiarClaridade){
        return true;
      }
      else{
        return true;
      }
  }


};