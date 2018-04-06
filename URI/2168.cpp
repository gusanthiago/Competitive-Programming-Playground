#include <bits/stdc++.h>

using namespace std;

const int maxn = 110;

int mtx[maxn][maxn];

int main () {


	int n,sum;

	cin >> n;
	n +=1;

	memset(mtx, -1, sizeof mtx);

	for (int i=1; i <= n; i++) {
		for (int j=1; j <= n; j++) {
			cin >> mtx[i][j];
		}
	}

	for (int i=1, totN = n - 1; i <= totN; i++) {
		for (int j=1; j <= totN; j++) {

			if (mtx[i][j] == -1 ||
					mtx[i+1][j] == -1 ||
					mtx[i][j+1] == -1 || 
					mtx[i+1][j+1] == -1) {
				continue;
			}

			sum = mtx[i][j] + mtx[i+1][j] + mtx[i+1][j+1] + mtx[i][j+1];

			if (sum >= 2)
				cout << "S";
			else 
				cout << "U";



		}
		cout << endl;
	}



	return 0;
}