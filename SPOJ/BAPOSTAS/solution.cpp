#include <bits/stdc++.h>


using namespace std;


const int maxn = 10010;

int main(){


	int games[maxn], previousMax, sumMax, n;

	while (cin >> n) {

		if (! n) break;

		for (int i=0; i < n; i++) {
			cin >> games[i];
		}

		sumMax = 0;
		previousMax = games[0];

		for (int i=0; i < n; i++) {
		
			sumMax = sumMax + games[i];
			previousMax = max(previousMax,sumMax);
			if (sumMax < 0) {
				sumMax = 0;
			}
		}

		if (previousMax <= 0) {
			cout << "Losing streak." << endl;
		} else {
			cout << "The maximum winning streak is " << previousMax << "." << endl;
		}

	}




	return 0;
}