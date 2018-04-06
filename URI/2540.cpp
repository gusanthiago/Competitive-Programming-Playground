#include <bits/stdc++.h>

using namespace std;

int main() {

	int n, tmp;
	double total;

	while (cin >> n) {
		total = 0;
		for (int i=0; i < n; i++) {
			cin >> tmp;
			if (tmp) total++;
		}

		if ((2.0 / 3.0) <= (total / n)) {
			cout << "impeachment" << endl;
		} else {
			cout << "acusacao arquivada" << endl;
		}
	}


	return 0;
}