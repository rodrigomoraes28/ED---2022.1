#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


void insertionnSort(vector<int>& vetor){

    int tamanho = vetor.size();
    int i;
    int j;
    int chave;
    //Insertionildo 
    //utilizar função ou algoritmo "insert on" 
    
    for(i = 1 ; i < tamanho; i++){ //o vetor que vai pegar a partir do segundo elemento da lista para comparar com os outros
        chave = vetor[i];           //chave vai ser a variavel que vai pegar o valor do elemento do vetor que ta sendo analisado no momento
        j = i-1;                 // valor de j é o valor a esquerda , o i é ao direita e o j é a direita
        while(j >= 0 && vetor[j] > chave){  //enquanto o elemento a esquerda (j) tiver na primeira posição ou acima e
                                        //e tambem se o valor do elemento na posição a esquerda do vetor(j) for maior que o valor que analisou 
                                        //na posição a direita do vetor (i) que é o valor que a chave armazenou ele segue pra as linhas abaixos
                                       
            vetor[j+1] = vetor[j];      //se o for é verdadeiro ele vai pra ca e pega o maior valor entre o valor a esquerda(j) e a direita (i)
                                    //e joga o maior valor para uma posição a frente (vetor[j+1] = aux[j])

            j = j -1;                //decrementa o j aqui para nao ficar no loop para sempre e dae pode voltar para o primeiro for da linha 17
        }
            vetor[j+1] = chave;   //iremos inserir a chave na posição [j+1], uma posição a direita pois é o maior valor entre os 2 numeros comparados
                                //e o maior valor fica a direita(posição j+1) enquanto o menor fica a esquerda (posição j apenas)
    }


    

}


/*int searchIndice(vector<int>& vetor, int &value_search){

    int procura_valor = value_search;
    int resultado;
    vector<int> aux = vetor;
    int tamanho = vetor.size();
    
    for(int i = 0 ; i < vetor.size() ; i++){
        if(procura_valor < vetor.size()){
            procura_valor = aux[i];
        }
    }
        resultado = procura_valor;   
        return resultado;

}
*/
int main(){

    int tamanho = 0;
    int num;
    int vezes;
    cin >> vezes;
    
    vector<int> vetor;

    //digitar o numero "1" --- > quero adicionar um numero no vetor, e apos isso digo o valor desse numero, ex:
    //ae fica entradas "1 7" --- > quero adicionar um numero no vetor (por isso digitei 1) e após isso digitei 7 (o valor do numero que queria inserir)

    //apos isso feito meu algoritmo precisa ser ordenado em ordem crescente denovo, pra isso uso o insertion sort

    //digitar o numero "2" --- > depois tem q digitar outro valor que é no max ate o tamanho do vetor -1,
    //ae fica entradas : "2 3" , quero saber o valor(por isso digitei 2) do indice 3 do vetor

    for(int i = 0 ; i< vezes ; i++){
        cin >> num;
    
    if(num == 1){
        int value_add;
        cin >> value_add;
        tamanho++;
        vetor.push_back(value_add);
        insertionnSort(vetor);
    }

    // if(num == 3){
    //     for(int j = 0 ; j < vetor.size(); j++){
    //         cout << vetor[j] << endl;
    //     }
    // }

    if(num == 2){
        int value_search;
        cin >> value_search;
        if(value_search < vetor.size()){
        cout << vetor[value_search] << endl;  //aqui como o value_search é um inteiro serviria como eu pegar e por o vetor[3] e por pra printar o valor do elemento na posição do vetor[3] se o valor_search for 3 ou qlqr outra coisa
        // searchIndice(vetor,value_search);
        }
        else{
            cout << "Insira um valor que nao exceda o tamanho do vetor" << endl;
            cout << "Insira um valor entre 0 e " << tamanho << endl;
        }
    }
    
    /*
    for(int i = 0 ; i < tamanho ; i++){
        cout << vetor[i] << " ";
    }
    */
    
    //algoritmoonline(vetor);
    }
    cout << "\n";
    
    return 0;
}


