#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int busca_binaria(vector<int>& vetor , int &n , int &item){

  int inicio = 0;
  int fim = n - 1;
  int contador = 0;

  while (inicio <= fim){
    int meio = (inicio + fim) / 2;
    contador = contador + 1;
    if(vetor[meio] == item){
      break;
    }
    else{
      if(vetor[meio] > item){
        fim = meio -1;
      }
      else{
        inicio = meio + 1;
      }
    }
  }
  return contador;

  /*
  inicio = 0 #inicio do vetor
  fim   = n - 1 # fim do vetor
  contador = 0 # numero de iteracoes para encontrar um elemento no vetor
  while inicio <= fim:
    meio = (inicio + fim)//2 #divisão inteira
    contador = contador + 1
    if vetor[meio] == item:
      break             
    else:
      if vetor[meio] > item:
        fim = meio - 1
      else:
        inicio = meio + 1
  return contador;
 */
  }

  

int main(){


  int n; // tamanhodo vetor
  cin >> n;

  int vezes;    // vezes que quer que tenha os item la n sei oq
  cin >> vezes;

  vector<int> vetor;
  int num;
  for(int i = 0 ; i < n ; i++){ //lendo vetor 
    cin >> num;
    vetor.push_back(num);
  }

  int cont = 0; // contador que vai ajudar na parte dos item
  while(cont <= vezes){ // contador começa em 0 e a cada item adicionado e a busca binaria q faz e retorna o 
                      // contador é adicionado 1 ao cont , ae qnd o cont fica maior que o vezes ele para de ler os item
                      // pq so pode ir ate o cont ser igual ao vezes , começa de 0, ae faz o primeiro item conta 1, dps conta outro item, conta 2
                      // ate a quantidade de vezes determinada pelo inteiro de nome "vezes"
    int item;
    cin >> item;
    busca_binaria(vetor,n,item); // essa funcao vai retornar um tipo inteiro chamado "contador"
    cont++;
  }
    
  cout << "\n";

  return 0;


}