#include <bits/stdc++.h>

using namespace std; 

const int maxn = 1100;

int main() {

	int n, indexGreather, index2Greather;
	int numb[maxn];

	while (cin >> n) {
		if (n == 0) break;

		memset(numb, 0, sizeof numb);

		for (int i=0; i < n; i++) {
			cin >> numb[i];
		}

		index2Greather = 1;
		indexGreather = 0;

		for (int i=1; i < n; i++) {
			if (numb[i] > numb[indexGreather]) {
				index2Greather = indexGreather;
				indexGreather = i;
			} else if (numb[i] > numb[index2Greather]) {
				index2Greather = i;
			}

		}

		cout << index2Greather + 1 << endl;
	}




	return 0;
}