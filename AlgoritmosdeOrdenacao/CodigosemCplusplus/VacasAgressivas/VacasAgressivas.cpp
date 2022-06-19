#include <iostream>
#include <vector>
using namespace std;
  
int main(){


    int n,c;
    cin >> n >> c;

    vector<int> vetor;
    int num;

    for(int i = 0; i < n ; i++){
        cin >> num;
        vetor.push_back(num);
    }

    int lb = 1;
    int ub = 1e9;
    int ans = 0;

    while(lb <= ub){
        int mid = (lb + ub)/2;
        int cow = 1;
        int prev = vetor[0];
        for(int i = 1; i < n ; i++){
            if(vetor[i]-prev>=mid){
                cow++;
                prev = vetor[i];
                if(c == cow) break;
            }
        }
        if(cow == c){
            ans = mid;
            lb = mid+1;
        }
        else ub = mid -1;
    }
    cout << ans << endl; 
}
 
/*

bool CanPlaceCows(int c, vector<int> vetor, int n, int distancia){

    
    int contador = 1;
    int last_position = vetor[0];

    for(int i = 1 ; i < n; i++){
        if(vetor[i] - last_position >= distancia){
            last_position = vetor[i];
            contador++;
        }
        if(contador == c){
            return true;
        }
        else{
            return false;
        }
    }
}


// int largestMinDist(vector<int> vetor, int n){

//     int low = 1;
//     int high = vetor[n-1] - vetor[0];
//     int res;
//     while(low <= high){
//         int middle = (low + high) / 2;
//         if(CanPlaceCows(middle)){
//             res = middle;
//             low = middle+1; 
//         }
//         else{
//             high = middle -1;
//         }
//     }
//         return res; // cout << res

//     }


int main(){


    int n; // quantidade de baias no estabulo (2 <= N <= 100.000)
    int c; // vacas (2 <= C <= N)
    cin >> n >> c;

    vector<int> vetor;
    int num;
    /*
    Porém, suas C vacas (2 <= C <= N) não gostaram desse layout de estábulo e 
    tornaram-se agressivas umas com as outras quando colocadas em um estábulo. 
    Para evitar que as vacas se machuquem, Guthyerri quer colocá-las nas baias, 
    de forma que a menor distância entre duas delas seja a maior possível. 
    Qual é a maior distância mínima?
   
    for(int i = 0; i < n ; i++){
        cin >> num;
        vetor.push_back(num);
    }
     
    int start = 0;
    int end = vetor[n-1] - vetor[0];

    int ans = -1;

    while(start <= end){
        int mid = start + (end-start)/2;

        if(CanPlaceCows(c,vetor,n,mid)){
            ans = mid;
            start = mid+1;
        }
        else{
            end = mid -1;
        }

        cout << ans;
    }

    // cout << largestMinDist(vetor,n);
    return 0;
}

*/