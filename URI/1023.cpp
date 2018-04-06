#include <bits/stdc++.h>

using namespace std;

const int maxn = 1000010;

vector <int>cities[maxn];

int main() {

	int n,x,y, countCity = 0,maxIt;
	double consumption, nP;

	while (scanf(" %d", &n) && n != 0) {

		if (countCity != 0) printf("\n");
		printf("Cidade# %d:\n", ++countCity);
		maxIt = -1;
		consumption = 0;
		nP = 0;
		for (int i=0; i < n; i++) {
			scanf(" %d %d", &x, &y);
			int aux = y / x;
				
			if (cities[aux].size()) {
				cities[aux][0] = x  + cities[aux][0];
			} else {
				cities[aux].push_back(x);
			}
			
			consumption += y;
			nP += x;
			if (maxIt < aux) {
				maxIt = aux;
			}
		}

		for (int i=0; i <= 200; i++) {

			for (int j=0; j < cities[i].size(); j++) {
				printf("%d-%d", cities[i][j], i);
				if (i < maxIt) printf(" ");
			}
			cities[i].clear();
		}


		printf("\nConsumo medio: %.02f m3.\n",  floor(100 * (float)consumption/nP) / 100);

	}


	return 0;
}