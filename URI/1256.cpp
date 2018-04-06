#include <bits/stdc++.h>

using namespace std;

const int maxn = 110;

vector<int> table[maxn];

void clearTable() {
	for (int i=0; i < maxn; i++) {
		table[i].clear();
	}
}

int main() {

	int n, m, c, kC;

	cin >> n;

	while (n--) {

		cin >> m >> c;
		clearTable();

		for (int i = 0; i < c; i++) {
			cin >> kC;
			table[kC % m].push_back(kC);
		}

		for (int i=0; i < m; i++) {
			cout << i << " -> ";
			for (int j=0, totJ = table[i].size(); j < totJ; j++) {
				cout << table[i][j] << " -> ";
			}
			cout << "\\" << endl;
		};

		if (n != 0) cout << endl;


	}





	return 0;
}