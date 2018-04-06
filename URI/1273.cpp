#include <bits/stdc++.h>

using namespace std;

const int maxN = 64;

int main () {

	int n, maxSize,countS;
	char total[maxN][maxN];

	cin >> n;
	while (1) {
		cin.ignore();
		maxSize = 0;

		for (int i=0; i < n; i++) {
			scanf("%s", total[i]);
			countS = strlen(total[i]);
			maxSize = countS > maxSize ? countS : maxSize;

		}
		for (int i=0; i < n; i++) {
			// cout << total[i] << endl;
			printf("%*s\n", maxSize, total[i]);
			countS = strlen(total[i]);
			for (int j=0; j < countS; j++) total[i][j] = 0;

		}

		cin >> n;
		if (n == 0) break;
		cout << endl;
	}



	return 0;
}