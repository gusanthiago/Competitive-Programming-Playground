#include <bits/stdc++.h>

using namespace std;

int main () {

	int n,t,tmp, caseI = 0;
	vector<int> tests;

	scanf(" %d", &t);
	while (t--) {

		tests.clear();
		scanf(" %d", &n);
		for (int i=0; i < n; i++) {
			scanf(" %d", &tmp);
			tests.push_back(tmp);	
		}

		sort(tests.begin(), tests.end());
		printf("Case %d: %d\n", ++caseI, tests[n / 2]);

	}


	return 0;
}