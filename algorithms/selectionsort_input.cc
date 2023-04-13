#include <iostream>
using namespace std;

int minindex(float A[], int i, const int N) {
  int k = i;
  for (int j = (i + 1); j < N; j++) {
    if (A[j] < A[k]) {
      k = j;
    }
  }

  return k;
}

void selectionsort(float A[], int i, const int N) {
  if (i < (N - 1)) {
    int k = minindex(A,i,N);
    int scambio = A[k];
    A[k] = A[i];
    A[i] = scambio;
    selectionsort(A,i+1,N);
  }
}

void stampa(const float A[], const int N) {
 for (int i = 0; i < N; i++) {
  cout<<A[i]<<' ';
 } 
 cout<<endl<<endl;
}

int main() {
  //const int N = 7;
  //int A[N] = {9,11,3,-2,4,3,7};
  float * array;
  int n;
  cout<<"Inserisci il numero di elementi: ";
  cin>>n;
  cout<<"Inserisci "<<n<<" elementi: ";
  array = new float[n];
  for (int i = 0; i < n; i++) {
    cin>>array[i];
  }
  stampa(array,n);
  selectionsort(array,0,n);
  stampa(array,n);
  return 0;
}

