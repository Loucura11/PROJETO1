#include "Sensor.cpp"
using namespace std;
     
class Umidade : public Sensor{
    float Umidade;
 public:
     float getUmidadeRelativa(){
       Umidade = generateRandomValue() * 100.0f / 255.0f;
       return Umidade;
     }
};