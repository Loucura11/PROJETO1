
#include "Sensor.cpp"
using namespace std;

class Temperatura : public Sensor {
private:
    float temperatura; // Member variable

public:
 
    float getTemperaturaEmC() {
        temperatura = 22 + (0.05 * generateRandomValue());
        return temperatura;
    }

    float getTemperaturaEmK() {
        temperatura = getTemperaturaEmC() + 273;
        return temperatura;
    }

    float getTemperaturaEmF() {
        temperatura = (getTemperaturaEmC() * (9.0 / 5.0)) + 32; 
        return temperatura; // Return the calculated value
    }
};
