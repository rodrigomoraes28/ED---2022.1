#include <iostream>
#include <iomanip>
//#include <algoritm>
using namespace std;
int main(){


    float n; // igrejas que marcelinho entrou
    float c; // valor que seria doado aos pobres

    cin >> n >> c;

    /*
    Jota Marcelinho estava pensando em um método para ficar rico. Ele entrou na igreja de Santo Antônio e disse:
    Santo Antônio, eu estou muito preocupado com os pobres se você dobrar o dinheiro que eu estou no bolso, eu doarei 20 reais para os pobres.
    Quando ele saiu da igreja e olhou no bolso, o dinheiro tinha dobrado. Em seguida, ele entrou em mais duas igrejas. Contudo, quando ele saiu da terceira igreja e olhou no bolso, ele estava com os bolsos vazios.
    Sua tarefa é descobrir com quanto de dinheiro ele entrou na primeira igreja.
    */
   float cont = 1;
   float valor = 0;
   while(n >= cont && valor > 0){
        valor = valor * 2;
        valor = valor - c;
        cont++;
   }

    for(int i = 1 ; i <= n ; i++){
        valor = valor + c;
        valor = valor / 2;
    }
    
    
    cout << fixed << setprecision(2);
    cout <<  valor ;


    return 0;
}