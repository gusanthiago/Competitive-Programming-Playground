#include <bits/stdc++.h>

using namespace std;

int main () {

	int n, a, b, pontA,pontB;

	while (scanf(" %d", &n) && n) {
		
		pontA = 0; pontB = 0;
		while(n--) {
			scanf(" %d %d", &a, &b);
			if (a > b) pontA++;
			else if (b > a) pontB++;
		}

		printf("%d %d\n", pontA, pontB);

	}



	return 0;
}