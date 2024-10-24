#pragma once
#include <iostream> 
#include "Componente.cpp"
using namespace std;

class Atuador : public Componente {
public:
    bool setValor(int escolha) {
        this->valor = escolha;
        return true;
    }
};
