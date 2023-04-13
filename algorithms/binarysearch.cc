#include <iostream>
using namespace std;

int binary_search(const int L[],const int KEY,const int N) {
	int i = 0;
	int j = N-1;

	while (i<=j) {
		int k = (j+i)/2;
		if (L[k] == KEY)
			return k;
		if (L[k] > KEY)
			j = k-1;
		else
			i = k+1;
	}
	return -1;
}

int binary_search2 (const int L[], const int KEY, const int N) {
	int i = (N-1)/2;
	int k = i;	
	while (k > 0) {
		k = k/2;
		if (L[i] == KEY)
			return i;
		if (L[i] > KEY)
			i = i - k;
		else
			i = i + k;
	}
	return -1;
}


int main() {
	
	const int N = 12;
	int a[N] = {1,2,3,4,4,5,6,8,11,14,15,17};
	int key;

	for (int i = 0; i < N; i++)
		cout<<a[i]<<' ';
	cout<<endl<<endl;
	cin>>key;

	cout<<"ALGORITMO 1: "<<binary_search(a,key,N)<<endl;
	cout<<"ALGORITMO 2: "<<binary_search2(a,key,N)<<endl;
	return 0;
}
