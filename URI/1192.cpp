#include <bits/stdc++.h>

using namespace std;

int main () {

	int a,b,n;
	char c;

	scanf(" %d", &n);
	while(scanf("%d%c%d", &a, &c, &b) != EOF) {

		if (a == b) cout << a * b << endl;
		else if (isupper(c)) cout << b - a << endl;
		else cout << a + b << endl;
	}


	return 0;;
}