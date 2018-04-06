#include <bits/stdc++.h>

using namespace std;

const int maxn = 128;

int table[maxn][maxn];

int main() {

	int n,m, count;
 	int I[] = {0, 0, 1, -1};
 	int J[] = {1, -1,0, 0};


	while (cin >> n >> m) {

		memset(table, 0, sizeof table);

		for (int i=1; i <= n; i++) {
			for (int j=1; j <= m; j++) {
				cin >> table[i][j];
			}
		}
		for (int i=1; i <= n; i++) {
			for (int j=1; j <= m; j++) {
				if (table[i][j]) cout << "9";
				else {
					count = 0;
					for (int z=0; z < 4; z++) {
						if (table[i + I[z]][j + J[z]]) {
							count++;
						}
					}
					cout << count;
				}
			}
			cout << endl;
		}

	}


	return 0;
}