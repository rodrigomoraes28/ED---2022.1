#ifndef RAIOS_HPP
#define RAIOS_HPP

#include <bits/stdc++.h>
#include <vector>

using namespace std;



class Raios{

    private: 
    int largura; // largura
    int comprimento; // comprimento

    struct Raio{  
        int x;    
        int y;
    };
 
       
    public:
    int cont = 0;
    vector<Raio> vetor;

    
    Raios(int n, int m){ 
        n = largura;
        m = comprimento;
            
    } 
   

    void add(int x, int y){ 
    Raio a;
    a.x = x;
    a.y = y;
    vetor.push_back(a);  
    }


    int mesmo_lugar(){
        
        int cont = 0;
        for(int i = 0 ; i < vetor.size() ; i++){
            for(int j = 1 ; j < vetor.size() ; j++){
                if(vetor.at(i).x == vetor.at(j).x && vetor.at(i).y == vetor.at(j).y){
                    cont++;
                    return 1;
                }
            }
        }
    
        if(cont == 0) return 0;
         
       
    }
}; 
#endif