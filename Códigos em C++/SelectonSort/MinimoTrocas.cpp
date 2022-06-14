#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

void selectionSort(vector<int>& vetor, int &contador){

    
    //Selecionildo  
    //utilizar função ou algoritmo "Select On" 

    /*
    Dado um vetor de nn elementos distintos, encontre o número mínimo de trocas necessários para ordenar o vetor em ordem crescente.
    Por exemplo, o vetor [3 2 1] só precisar realizar uma troca para ordenar o vetor em ordem crescente.

    A primeira linha da entrada contém um inteiro N \leq 10 000N≤10000 representando o tamanho do vetor. A segunda linha da entrada possui N números separados por espaço.

    Saída
    O seu programa deve imprimir o número mínimo de trocas realizadas para ordenar o vetor em ordem crescente.

    Esse problema pode ser resolvido da seguinte maneira:.

    Complexidade de tempo esperada:  O(n^2)
 
    Complexidade de memória auxiliar esperada:  O(1)

    _Contudo, o problema também pode ser resolvido com as seguintes complexidades esperadas:_

    Complexidade de tempo esperada:  O(n log n) 

    Complexidade de memória auxiliar esperada:  O(n)
*/  
    int tamanho = vetor.size();        //primeiro for (i) = primeira posição
                                       //segundo for (j) = posição que vem dps (1 dps)
    int i,j,menor,troca;
    for(i = 0 ; i < tamanho -1; i++){ // percorrendo o vetor ate um o penultimo tamanho
        menor = i;                    //atribui a variavel criada antes chamada de menor, a posição i da vez
        for(j = i+1 ; j < tamanho ; j++){ // vai percorrer a partir do segundo valor apos o i escolhido no for anterior
                                        //ou seja no 1 for o i = 0, no segundo é (0+1 , i =1) , (i = 1 , i = 1+1 = 2) , (i =2 , i = 2 +1 = 3) e assim vai 

            if(vetor[j] < vetor[menor]) //verifica o valor do elemento do vetor da posição do primeiro for (i) 
                                        //com o valor da posição do segundo for (j)
                                        //se o valor do primeiro for (i) for maior do que do segundo for(j) 
                                        
                                        
            menor = j;                  // é atribuido a posição da variavel do segundo for (j) a variavel menor
                                        // que armazenava anteriormente o valor da posição do primeiro for
                
        }
        if(i != menor){                 //se o i for diferente da variavel menor, ou seja, se ali em cima no segundo for
                                        //o valor do vetor na posição da que foi usada a varivel menor pra ser achada
                                        //for maior q o do segundo for(j) ele faz essas linhas de baixo

            troca = vetor[i];           //então o elemento na posição i (que n eh mais igual da variavel menor)
                                        //vai para a variavel chamada "troca"

            vetor[i] = vetor[menor];    //depois o vetor na posição i ainda recebe a posição do vetor que é usada a variavel menor
                                        //para atribuir essa posição

            vetor[menor] = troca;       //e apos isso o vetor na posição que é utilizado a variavel menor para saber
                                        //essa posição, recebe o valor da variavel troca 

            contador++;                 //desse foi ocorrida a troca e é incremetnado 1 ao contador
        }
        
}
 
}
int main(){

    int tamanho;
    int contador = 0;
     
    vector<int> vetor;
    cin >> tamanho;
     
    for(int i = 0; i < tamanho ; i++){
        int num;
        cin >> num;
        vetor.push_back(num);
    }
   
 
    selectionSort(vetor,contador);
    cout << contador;
    cout << "\n";
    
    return 0;
}


