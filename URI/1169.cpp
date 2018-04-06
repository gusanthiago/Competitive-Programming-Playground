#include <bits/stdc++.h>

using namespace std;

#define huge long long int unsigned

double calcGrains(double x) {
	double result = 1;
	for (int i=0; i < x; i++) {
		result = result * 2;
	}

	return (result / 12) / 1000;
}

int main () {


	int n;
	double x;

	scanf(" %d", &n);
	while (n--) {
		scanf(" %lf", &x);
		// cout << x << endl;
		printf("%.0f kg\n", floor(calcGrains(x)));

	}



	return 0;
}

