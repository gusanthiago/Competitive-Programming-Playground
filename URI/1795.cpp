#include <bits/stdc++.h>

using namespace std;

#define huge long long int

huge exp(huge base, huge exp) {
	
	if (exp == 0) return 1;
	huge result = 1;
	for (int i=0; i < exp; i++) {
		result *= base;
	}
	return result;	
}

int main() {

	huge n;

	cin >> n;

	printf("%lld\n", exp(3, n));





	return 0;
}