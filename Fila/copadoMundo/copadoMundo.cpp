#include <iostream>
#include <queue>

using namespace std;

int main(){
    
    queue<char> fila;
    int n = 16;
    int mm , nn;
    
    char time = 'A';
    //add todos os times na fila
    
    for(int i = 0 ; i < n ;i++){
        fila.push(time);
        time = time + 1;
    }
    
    //vou remover de 2 em 2 para fazer os jogos
    int count = 0;
    while(fila.size() > 1){
        //retiro o 2 da fila
        char t1 = fila.front();
        fila.pop(); // tiro
        char t2 = fila.front();
        fila.pop();
        //agora recebo os resultados
        
        cin >> mm >> nn;
        
        if(mm > nn){
            fila.push(t1);
        }
        else{
            fila.push(t2);
        }
        
        count = count +1;
    }
    
    cout << fila.front() << endl;
     
}
    