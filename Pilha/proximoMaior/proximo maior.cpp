 #include <iostream>
#include <stack>
#include <algorithm>

using namespace std;
  
int main(){
    
    
    int n;
    cin >> n;
    stack<int> posicaoNaoUsada;
    int vetor[n], procurarIndices[n];
    
    for(int i = 0 ; i<n ;i++){
        cin >> vetor[i];
    }
    
    for(int j = n-1; j >=0 ; j--){
         
        
        if(!posicaoNaoUsada.empty()){
            while(!posicaoNaoUsada.empty() && vetor[posicaoNaoUsada.top()] <= vetor[j])
                posicaoNaoUsada.pop();
        }
        
        if(posicaoNaoUsada.empty()){
            procurarIndices[j] = -1;
        }
        
        
        else{
            procurarIndices[j] = posicaoNaoUsada.top();
        }
        
        posicaoNaoUsada.push(j);
    }
    
    
    for(int k = 0; k<n ;k++){
        if(k == n-1){
            cout << procurarIndices[k];
        }
        else{
            cout << procurarIndices[k] << " ";
        }
    }
    
    cout << endl;
    
    return 0;
}