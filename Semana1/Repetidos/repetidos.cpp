#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


void repetidos(vector<int>& vetor){


    vector<int> aux = vetor;
    int tamanho = vetor.size();
    int count = 0;

    for(int i = 0 ; i < tamanho ; i++){
        for(int j = i+1 ; j < tamanho ; j++){
            if(vetor[i] == vetor[j]){
                count++;
                break;
            }
        }
    }
    cout << count;

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

    /*
    for(int i = 0 ; i < tamanho ; i++){
        cout << vetor[i] << " ";
    }
    */

    repetidos(vetor);

    cout << "\n";

    return 0;
}


