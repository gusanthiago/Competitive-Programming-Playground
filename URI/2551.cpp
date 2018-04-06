#include <bits/stdc++.h>

using namespace std;

const int maxn = 32;

int main() {

	int n;
	float vet[maxn], t, d;

	while (cin >> n) {		
		for (int i=0; i < n; i++) {
			cin >> t >> d;
			vet[i] = d / t;
		}

		// cout << "1" << endl;
		
		for (int i=0; i < n; i++) {
			int j = 0;
			if (i == 0) {
				cout << 1 << endl;
				continue;
			}
			bool verified = true;
			while (j < i) {
				if (i != j && vet[i] <= vet[j]) {
					verified = false;
				}
				j++;
			}
			if (verified)	cout << i + 1 << endl;
		}
	}


	return 0;
}