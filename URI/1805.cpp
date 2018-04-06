#include <bits/stdc++.h>

using namespace std;

#define huge long long int unsigned 

int main() {

	huge a,b;

	scanf(" %llu %llu", &a, &b);

	for (huge i=a + 1; i <= b; i++) {
		a += i;
	}
	printf("%llu\n", a);



	return 0;
}