#include <bits/stdc++.h>

using namespace std;

int cloneNg(int n) {

	if (n == 1) {
		return 0;
	} else {

		int aux = 1;
		while (aux < n) {
			if (pow (2, aux) == n) {
				return aux;
			}
			aux++;
		}
	
	}

}

int main() {

	int n;
	while (cin >> n) {
		cout << cloneNg(n) << endl;
	}



	return 0;
}