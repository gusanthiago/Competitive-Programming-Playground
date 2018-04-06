#include <bits/stdc++.h>

using namespace std;

const int maxn = 42;

int pd[maxn];

int fib(int n) {

	if (n < 0) return 0; 
	if (n <= 1) return 1;
	if (pd[n]) return pd[n];

	return pd[n] = fib(n - 1) + fib(n - 2);
}


int main() {

	memset(pd, 0, sizeof pd);

	int n;

	cin >> n;
	while (n != 0) {
		cout << fib(n) << endl;
		cin >> n;
	}



	return 0;
}