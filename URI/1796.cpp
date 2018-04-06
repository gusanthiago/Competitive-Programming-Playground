#include <bits/stdc++.h>

using namespace std;

int main() {


	double n, nI, sumIns = 0;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> nI;
		if (nI) sumIns++;
	}

	cout << (sumIns >= (n / 2) ? 'N' : 'Y') << endl;  



	return 0;
}