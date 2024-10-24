#pragma once
#include <iostream>
using namespace std;

class Componente {
public:
    bool ligado;
    bool conectado;
    int valor;
    string nome;

public:
    void ligar() {
        this->ligado = true;
    }

    void desligar() {
        this->ligado = false;
    }

    int getValor() {
        return valor;
    }
};
