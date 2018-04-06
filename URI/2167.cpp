#include <bits/stdc++.h>

using namespace std;

const int maxn = 10100;

int main () {


	int n, vet[maxn], ant = 0;

	cin >> n;
	cin >> vet[0];	
	for (int i=1; i < n; i++) {

		cin >> vet[i];
		if (vet[i-1] > vet[i] && ! ant) {
			ant = i + 1;
		}

	}

	cout << ant << endl;

	return 0;
}