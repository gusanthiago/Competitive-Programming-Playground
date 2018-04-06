#include <bits/stdc++.h>

using namespace std;

int main() {

	int n, aMin, aMax,cont = 0, altT;

	while (cin >> n >> aMin >> aMax) {
		cont = 0;
		while (n--) {
			cin >> altT;
			if (altT >= aMin && altT <= aMax) cont++;

		}
		cout << cont << endl;
	}
	return 0;
}