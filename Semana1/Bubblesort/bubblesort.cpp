#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int Bubblesort(vector<int>& A){

int count = 0;
int n = A.size();
int swapped = true;

while (swapped != false){

swapped = false;
count = count+1;

    for(int i = 0 ; i <= n-2 ; i++){
        if(A[i] > A[i+1]){
            swap(A[i],A[i+1]);
            swapped = true;
        }
    }

}
   return count;
}


int main(){

int tamanho = 0;
cin >> tamanho;
vector<int> teste;

for(int i = 0 ; i < tamanho ; i++){
    int value;
    cin >> value;
    teste.push_back(value);
}

int value = Bubblesort(teste);

cout << value << endl;


    return 0;
}

