#include <iostream>
#include <vector>

using namespace std;

struct Bomba{
    int qtdGasolina, distanciaBomba;
    void defBomba(int qtdGasolina, int distanciaBomba){
        this->qtdGasolina = qtdGasolina;
        this->distanciaBomba = distanciaBomba;
    } 
};

int main(){
    vector<Bomba> bombas;
    int qtdBombas;
    cin >> qtdBombas;
    for(int i = 0; i < qtdBombas;i++){
        int qtdGasolina, distanciaBomba;
        Bomba bomb;
        cin >> qtdGasolina >> distanciaBomba;
        bomb.defBomba(qtdGasolina,distanciaBomba);
        bombas.push_back(bomb);
    }
    
    int caminhao = 0;
    
    bool allPercorred = false, invalidPerc = false;
    
    int inicio = 0, fim = bombas.size() - 1, perc;
    // cout << endl;
    while(!allPercorred){
        invalidPerc = false;
        perc = inicio;
        while(perc != fim){
            if(perc == bombas.size() && fim < bombas.size()-1)
                perc = 0;
            caminhao += bombas[perc].qtdGasolina;
            // cout << "perc = " << perc <<
            // " fim = " << fim << " " <<
            // caminhao << " " << 
            // bombas[perc].qtdGasolina << " " << 
            // bombas[perc].distanciaBomba << " " <<
            // caminhao - bombas[perc].distanciaBomba << endl;
            if(caminhao - bombas[perc].distanciaBomba < 0){
                caminhao = 0;
                invalidPerc = true;
                break;
            }else{
                caminhao -= bombas[perc].distanciaBomba;
                if(perc != fim) perc++; 
            }
        }
        // break;
        // cout << endl << perc << " " << inicio << " " << fim << endl << endl;
        if(perc == fim)
            allPercorred = true;
        if(invalidPerc){
            inicio++;
            fim = inicio - 1;
        }
    }
    cout << inicio << endl;
    return 0;
}