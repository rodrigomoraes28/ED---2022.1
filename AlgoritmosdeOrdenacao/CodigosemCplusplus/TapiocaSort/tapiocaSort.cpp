#include <iostream>
using namespace std;


int N;
int tapiocas[100];

void virarTapioca(int m) {
  for (int i = 1, j = m; i < j; i++, j--) {
    swap(tapiocas[i], tapiocas[j]);
  }
}

void tapioca_sort(int n) {
  if (n < 1) return;
  int virada_da_tapioca = -1;
  for (int i = 1; i <= n; i++) {
    if (tapiocas[i] == n) {
      virada_da_tapioca = i;
      break;
    }
  }
  if (virada_da_tapioca == n) {
    tapioca_sort(n-1);
  } else {
     if (virada_da_tapioca != 1) {
      int espatula = N-virada_da_tapioca+1;
      cout << espatula << " ";
      virarTapioca(virada);
    }

    cout << N-n+1 << " ";
    virarTapioca(n);
    tapioca_sort(n-1);
  }
}


int main() {

  
  cin >> N;
  int num;
  for (int i = 1; i <= N; ++i) {
       cin >> tapiocas[i];
  }

  tapioca_sort(N);
  cout << "0\n";

}