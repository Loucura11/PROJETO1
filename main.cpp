#include "Sala.cpp"
int main () {
    Sala Cozinha;
    Cozinha.setLimiarTemperatura(22);
    Cozinha.setLimiarClaridade(100);// valor entre 0 255
    Cozinha.setLimiarUmidadeUmidificador(50);
    Cozinha.setLimiarUmidadeDesumidificador(80);
    

     Sala Quarto;
    Quarto.setLimiarTemperatura(19);
    Quarto.setLimiarClaridade(115);// valor entre 0 255
    Quarto.setLimiarUmidadeUmidificador(50);
    Quarto.setLimiarUmidadeDesumidificador(80);
    

 Sala Banheiro;
   Banheiro.setLimiarTemperatura(24);
    Banheiro.setLimiarClaridade(90);// valor entre 0 255
    Banheiro.setLimiarUmidadeUmidificador(50);
    Banheiro.setLimiarUmidadeDesumidificador(80);
    
    for (int i = 0; i <1440;i++){
    cout<< " " << endl;
    cout<< "Cozinha: " << endl;
    Cozinha.AtualizarSensores();
    Cozinha.AtualizarAtuadores();
    cout<< " " << endl;
    cout<< "Quarto: " << endl;
    //Quarto.Aleatorio();
    Quarto.AtualizarSensores();
    Quarto.AtualizarAtuadores();
    cout<< " " << endl;
    cout<< "Banheiro: " << endl;
    //Banheiro.Aleatorio();
    Banheiro.AtualizarSensores();
    Banheiro.AtualizarAtuadores();
    //Cozinha.Aleatorio();
    cout <<"------------------------------------------"<< endl;
    }
};