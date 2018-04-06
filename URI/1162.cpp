#include <bits/stdc++.h>

using namespace std;

const int maxn = 64;

int main() {

	int n,l, countSwap, swapI;
	int wagons[maxn];

	cin >> n;
	while (n--) {
		cin >> l;

		for (int i=0; i < l; i++) {
			cin >> wagons[i];
		}
		
		countSwap = 0;

		for (int i=0; i < l; i++) {
			swapI = i;
			for (int j=i; j < l; j++) {
				if (wagons[swapI] > wagons[j]) {
					int aux = wagons[swapI];
					wagons[swapI] = wagons[j];
					wagons[j] = aux;
					countSwap++;
				}
			}

		}

		// for (int i=0; i < l; i++) {
		// 	cout << wagons[i] << " ";
		// }
		// cout << endl;

		cout << "Optimal train swapping takes " << countSwap << " swaps." << endl;


	}



	return 0;
}