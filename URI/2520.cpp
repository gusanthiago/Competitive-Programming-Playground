#include <bits/stdc++.h>

using namespace std;

const int maxn = 128;

int main() {

	int map[maxn][maxn], n, m;
	int myX,myY,pokemonX,pokemonY, numPos;

	while (scanf ("%d %d", &n, &m) != EOF) {

		for (int i=0; i < n; i++) {
			for (int j=0; j < m; j++) {
				scanf("%d", &map[i][j]);
				if (map[i][j] == 1) {
					myX = i;
					myY = j;
				} else if (map[i][j] == 2) {
					pokemonX = i;
					pokemonY = j;
				}
			}
		} 

		numPos = abs(myX - pokemonX) + abs(myY - pokemonY);

		printf("%d\n", numPos);

	}






	return 0;
}