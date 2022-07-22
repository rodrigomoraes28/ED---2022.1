#ifndef DISJUNTOS_HPP
#define DISJUNTOS_HPP
 
#include <bits/stdc++.h>
#include <vector>

using namespace std;

class Disjuntos{

    private:
    vector<int> vetor;
    vector<int> vet_une;
    
    public:
    
    
    Disjuntos(int n){ 
            
       for (int i = 0 ; i < n ; i++){
           vetor.push_back(i);
       }
       
       vet_une = vetor;
       
    }

    void une(int x, int y){
        
        vet_une[y] = vet_une[x];

    }

    int mesmo(int x, int y){
        
        
        
        if(vet_une[x] == vet_une[y]) return 1;
        else return 0;
  
    }
};


#endif