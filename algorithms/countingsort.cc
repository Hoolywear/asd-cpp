#include <iostream>
using namespace std;

void selectionsort(int A[], const int N, const int K) {
  int *C = new int[K+1];
  for (int i = 0; i <= K; i++) {
    C[i] = 0;
  }

  for (int j = 0; j < N; j++) {
    C[A[j]]++;
  }

  int j = 0;
  for (int i = 0; i <= K; i++) {
    while (C[i] > 0) {
      A[j] = i;
      j++;
      C[i]--;
    }
  }
}

void stampa(int A[], const int N) {
  for (int i = 0; i < N; i++) {
    cout<<A[i]<<' ';
  }
  cout<<endl<<endl;
}

int main() {
  int n,k;
  cout<<"Inserisci il numero di elementi: ";
  cin>>n;
  cout<<"Inserisci l'upper bound: ";
  cin>>k;
  int *a = new int[n];
  for (int i = 0; i < n; i++) {
    cout<<"Inserisci l'elemento numero "<<(i+1)<<": ";
    cin>>a[i];
  }
  stampa(a,n);
  selectionsort(a,n,k);
  stampa(a,n);

  return 0;
}

