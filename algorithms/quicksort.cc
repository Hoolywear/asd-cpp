#include <iostream>
using namespace std;

void scambia(int &a, int &b) {
  int scambio = a;
  a = b;
  b = scambio;
}

int partition(int A[], int P, int R) {
  int x = A[R];
  int i = P-1;

  for (int j = P; j < R; j++) {
    if (A[j] <= x) {
      scambia(A[j],A[i+1]);
      i++;
    }
  }

  scambia(A[i+1],A[R]);
  return i+1;
}

void quicksort(int A[],int P,int R) {
  if (P<R) {
    int q = partition(A,P,R);

    quicksort(A,P,q-1);
    quicksort(A,q+1,R);
  }
}

void stampa(int A[], const int N) {
  for (int i = 0; i < N; i++) {
    cout<<A[i]<<' ';
  }
  cout<<endl<<endl;
}

int main() {
  int n;
  cout<<"Inserisci il numero di elementi: ";
  cin>>n;
  int *a = new int[n];
  for (int i = 0; i < n; i++) {
    cout<<"Inserisci l'elemento numero "<<(i+1)<<": ";
    cin>>a[i];
  }
  stampa(a,n);
  quicksort(a,0,n-1);
  stampa(a,n);

  return 0;
}

