#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void indice(vector<int>& vetor){


    vector<int> aux = vetor;
    int tamanho = vetor.size();

    int swapped = true;
    while (swapped != false){

    swapped = false;

    for(int i = 0 ; i <= tamanho-2 ; i++){
        if(vetor[i] > vetor[i+1]){
            swap(vetor[i],vetor[i+1]);
            swapped = true;
        }
    }

}

    for(int i = 0 ; i < tamanho; i++){
        for(int j = 0 ; j < tamanho; j++){
            if(aux[j] == vetor[i]){// quando o vetor na posição do desordenado for o msm do da posição do ordenado valores do vetor desordenado com ordenado
            cout << j;
            break;
            }

        }

        if(i != tamanho-1) {
        cout << " ";
        }

    }

}

int main(){

    int tamanho;
    cin >> tamanho;
    vector<int> vetor;

    for(int i = 0 ; i < tamanho ; i++){
        int num;
        cin >> num;
        vetor.push_back(num);
    }


    indice(vetor);
    cout << "\n";


    return 0;
}
