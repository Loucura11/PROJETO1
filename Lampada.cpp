
#include "Atuador.cpp"
using namespace std;

class Lampada: public Atuador{

public:
bool setBrilho( bool luz) {
    if(luz){
        desligar();
        setValor(0);
        return true;

    }
    else {
        ligar();
        setValor(3);
        return true;

}
    
} 
};