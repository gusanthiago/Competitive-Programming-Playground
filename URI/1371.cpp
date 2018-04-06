#include <bits/stdc++.h>

using namespace std;

const int maxn = 25000010;

typedef long long int huge;

void portAction(huge n) {

	printf("1");
	huge limit = sqrt(n);
	for (huge i=2; i <= limit; i++) {
		printf(" %lld", i*i);
	}



}

int main() {

	huge n;

	cin >> n;

	while (n != 0) {
		portAction(n);
		printf("\n");
		cin >> n;
	}	




	return 0;
}