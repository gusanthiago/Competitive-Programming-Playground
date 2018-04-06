#include <bits/stdc++.h>

using namespace std;

#define huge long long int


int main () {
	

	int n;
	huge f;

	while(cin >> n >> f) 
		if (n + f == 0) break;
		else printf("%lld\n", n * f);


	return 0;
}