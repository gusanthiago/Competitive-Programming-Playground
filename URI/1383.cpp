#include <bits/stdc++.h>

using namespace std;

const int maxm = 16;
const int maxn = 9;

int mtx[maxm][maxm];

bool isMiniValid(int initialI,int initialJ,int maxI,int maxJ) {
	bool visited3[maxm];
	memset(visited3, 0, sizeof visited3);

	for (int i=initialI; i < maxI; i++) {
		for (int j=initialJ; j < maxJ; j++) {
			if (visited3[mtx[i][j]]) {
				return false;
			}
			visited3[mtx[i][j]] = true;
		}
	}

	return true;
}

bool isMtxValid() {
	bool visitedX[maxm],visitedY[maxm], visited3[maxm];

	for (int i=0; i < maxn; i++) {
		memset(visitedX, 0, sizeof visitedX);
		memset(visitedY, 0, sizeof visitedY);
		for (int j=0; j < maxn; j++) {
			
			if (visitedX[mtx[i][j]]) {
				return false;
			}
			if (visitedY[mtx[j][i]]) {
				return false;
			}
			visitedX[mtx[i][j]] = true;
			visitedY[mtx[j][i]] = true;
		}
	}
	if (! isMiniValid(0, 0, 3, 3)) return false;
	if (! isMiniValid(0, 3, 3, 6)) return false;
	if (! isMiniValid(0, 6, 3, 9)) return false;
	if (! isMiniValid(3, 0, 6, 3)) return false;
	if (! isMiniValid(3, 3, 6, 6)) return false;
	if (! isMiniValid(3, 6, 6, 9)) return false;
	if (! isMiniValid(6, 0, 9, 3)) return false;
	if (! isMiniValid(6, 3, 9, 6)) return false;
	if (! isMiniValid(6, 6, 9, 9)) return false;
	

	return true;
}


int main() {

	int n, instance = 0;
	cin >> n;

	while (n--) {

		memset(mtx, 0, sizeof mtx);

		for (int i=0; i < maxn; i++) {
			for (int j=0; j < maxn; j++) {
				cin >> mtx[i][j];
			}
		}

		printf("Instancia %d\n%s\n\n", ++instance, (isMtxValid() ? "SIM" : "NAO"));


	}



	return 0;
}