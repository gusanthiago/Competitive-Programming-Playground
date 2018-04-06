#include <bits/stdc++.h>

using namespace std;

const int maxn = 64;

int main() {

	int n,costDay,valueAdq, currentMax, previousMax, daysCost;
	int lucroDia[maxn];

	while (scanf(" %d", &n) != EOF) {

		scanf(" %d", &costDay);
		

		for (int i=0; i < n; i++) {
			scanf(" %d", &valueAdq);
			lucroDia[i] = valueAdq;
		}

		previousMax = max(lucroDia[0] - costDay, 0);

		for (int i=1; i < n - 1; i++) {
			
			int j = i;
			currentMax = max(lucroDia[i - 1] - costDay, 0);

			while (j < n - 1 && currentMax + lucroDia[j] - costDay > currentMax) {
				currentMax += lucroDia[j] - costDay;
				previousMax = max(currentMax, previousMax);
				j++;
				
			}
		}
		cout << previousMax << endl << endl;



	}

}