#include <bits/stdc++.h>


using namespace std;

int main () {

	double soma;
	int n;

	while (scanf(" %d", &n) && n != 0) {
		soma = 0;
		for (int i=1; i <= n; i++) soma += i*i;
		printf("%.0f\n", soma);
	}


	return 0;
}