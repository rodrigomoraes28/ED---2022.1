#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;



void repetidas(vector<int>& colecao1 , vector<int>& colecao2){


    int tamanho = colecao1.size();
    int cont = 0;

    sort(colecao1.begin(), colecao1.end());
    sort(colecao2.begin(), colecao2.end());

    for(int i = 0; i < tamanho ; ++i){
        if(colecao1[i] == colecao2[i]){
            cont++;
    }
    }

    if(cont == tamanho){
        cout << "1";
    }
    else{
        cout << "0";
    }
}

int main(){

    int tamanho;
    cin >> tamanho;
    vector<int> colecao1;
    vector<int> colecao2;

     for(int j = 0 ; j < tamanho ; j++){
        int num2;
        cin >> num2;
        colecao1.push_back(num2);
    }

    for(int i = 0 ; i < tamanho ; i++){
        int num;
        cin >> num;
        colecao2.push_back(num);
    }

    repetidas(colecao1,colecao2);
    cout << "\n";


    return 0;
}
