#include <bits/stdc++.h>

using namespace std;


bool isPossible(int rest) {

	int bills[] = {2, 5, 10, 20, 50, 100};
	int sizeBills = 6;
	for (int i=0; i < sizeBills; i++) {
		if (rest > bills[i]) {
			int valueSob = rest - bills[i];
			for (int j = 0; j < sizeBills; j++) {
				if (j != i && valueSob - bills[j] == 0)
					return true;
			}

		}
	}
	return false;
}


int main () {

	int n,m;

	while (cin >> n >> m) {
		if (n + m == 0) break;

		cout << (isPossible(m - n) ? "possible" : "impossible") << endl;;



	}


	return 0;
}