#include <bits/stdc++.h>

using namespace std;

const int maxn = 128;

int main () {

	int n, vet[maxn];
	bool flag = true, nextIsBigger = false;

	cin >> n;

	cin >> vet[0];	

	for (int i=1; i < n; i++) {
		cin >> vet[i];

		// organiza nextIsBigger e valida
		if (i == 1) 
			nextIsBigger = vet[i] > vet[i-1] ? false : true;
		else if (nextIsBigger && vet[i] < vet[i-1]) 
			flag = false;
		else if (! nextIsBigger && vet[i] > vet[i-1])
			flag = false;

		// define nextIsBigger
		if (vet[i] < vet[i-1]) 
			nextIsBigger = true;
		else if (vet[i] > vet[i-1]) 
			nextIsBigger = false;
		else
			flag = false;
	}

	printf("%d\n", flag);






	return 0;
}