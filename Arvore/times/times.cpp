#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <cmath>
using namespace std;

using std::cin;
using std::cout;
using std::endl;
using std::vector;

class Estudante{
    public:
        string nome;
        int h;
        Estudante(){}
        Estudante(string nome, int h) : nome(nome), h(h) {}
         
};

bool comp(const Estudante e1, const Estudante e2){
    return e1.h > e2.h;
}

bool orderByName(const Estudante e1, const Estudante e2){
    return e1.nome < e2.nome;
}

int main(){ 
    int n, t;
    
    cin >> n >> t;

    vector <Estudante> v;

    v.resize(n);

    for(int i = 0; i < n; i++){
        cin >> v[i].nome >> v[i].h;
    }

    sort(v.begin(), v.end(), comp);

    queue<Estudante> times;
    
    for(int i = 0; i < t; i++){
        vector<Estudante> timesAux;
        for(int j = i; j < v.size();j+=t){
            timesAux.push_back(v[j]);
        }
        sort(timesAux.begin(), timesAux.end(), orderByName);
        for(int j = 0; j < timesAux.size();j++){
            times.push(timesAux[j]);
        }
    }

    for(int i = 0, formacao = 1, begin = 0; i < n; i++){
        if(i == 0 || i == begin + floor(n/t)){
            begin = i+1;
            cout << "Time " << formacao << endl;
            formacao++;
        }else if(t >= formacao && i == n-1){
            cout << "Time " << formacao << endl;
            formacao++;
        }
        cout << times.front().nome << endl;
        times.pop();
        if(i == n-1 || i+1 == begin + floor(n/t)){
            cout << endl;
        }else if(t > formacao && i == n-2){
            cout << endl;
        }
    }
    cout << endl;
    // for(int i = 0; i < n; i++){
    //     cout <<  v[i].nome << " "  << v[i].h << endl;
    // }
}
