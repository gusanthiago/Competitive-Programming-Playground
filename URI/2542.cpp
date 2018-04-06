#include <bits/stdc++.h>

using namespace std;

int const maxn = 128;

long int packMarcos[maxn][maxn];
long int packLeonardo[maxn][maxn];

void cleanPacks() {
	memset(packMarcos, 0, sizeof packMarcos);
	memset(packLeonardo, 0, sizeof packLeonardo);
}

int main() {

	int n, m, l, cM,cL, a;
	cleanPacks();

	while (cin >> n) {

		cin >> m >> l;
		for (int i=0; i < m; i++) {
			for (int j=0; j < n; j++) {
				cin >> packMarcos[i][j];
			}
		}
		for (int i=0; i < l; i++) {
			for (int j=0; j < n; j++) {
				cin >> packLeonardo[i][j];
			}
		}

		cin >> cM >> cL;
		cin >> a;
		int leoResult = packLeonardo[cL - 1][a - 1], marcosResult = packMarcos[cM - 1][a - 1];
		// cout << leoResult << " " << marcosResult << endl;
		if (leoResult == marcosResult) {
			cout << "Empate" << endl;
		} else if (leoResult > marcosResult) {
			cout << "Leonardo" << endl;
		} else if (marcosResult > leoResult) {
			cout << "Marcos" << endl;
		}

	}

	return 0;
}