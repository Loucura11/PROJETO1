#include "Atuador.cpp"
#include "Lampada.cpp"
#include "Desumidificador.cpp"
#include "Umidificador.cpp"
#include "Ventilador.cpp"
#include <iostream>
#include "Sensor.cpp"
#include "Temperatura.cpp"
#include "Luminosidade.cpp"
#include "Umidade.cpp"
#pragma once
using namespace std;
class Sala {
    public:
Temperatura t;
float temperatura;
Luminosidade l;
float luminosidade;
Umidade u;
float umidade;
Ventilador v;
Lampada p;
Desumidificador d;
Umidificador a;
Sensor aleatorio;

void AtualizarSensores(){
    temperatura = t.getTemperaturaEmC();
   umidade = u.getUmidadeRelativa();
    luminosidade = l.estaClaro();
    cout<< "temperatura: " << temperatura << endl;
    cout<< "luminosidade: " << luminosidade << endl;
    cout<< "umidade: " << umidade << endl;
}

void AtualizarAtuadores(){
v.setVelocidadeVent(temperatura);
a.setConfiguracao(umidade);
d.setConfiguracao(umidade);
p.setBrilho(luminosidade);
   cout<< "Velocidade do ventilador: " << v.getValor() << endl;
    cout<< "Intesidade da lâmpada: " << p.getValor() << endl;
    cout<< "Intensidade do desumidificador: " << d.getValor() << endl;
    cout<< "Intensidade do umidificador: " << a.getValor() << endl;

}
void setLimiarTemperatura(float limiar) {
        v.setLimiarTemperatura(limiar);
    }
 void setLimiarClaridade(float claridade){
   l.setLimiarClaridade(claridade) ;
  } // número entre 0 e 255

  void setLimiarUmidadeUmidificador(float x){
     a.setLimiarUmidadeUmidificador(x);
  } // número entre 1 e 100

  void setLimiarUmidadeDesumidificador(float x){
    d.setLimiarUmidadeDesumidificador(x);}
   int Aleatorio (){
    return aleatorio.generateRandomValue();}
};