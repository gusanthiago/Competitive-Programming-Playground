#include <bits/stdc++.h>

using namespace std;

typedef long long int huge;

int main() {

	huge a[2];

	while (scanf(" %lld %lld", &a[0], &a[1]) && a[0] + a[1] != 0) {
		printf("%lld\n",  a[0] - (a[1] - a[0]));
	}



	return 0;
}