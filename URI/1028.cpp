#include <bits/stdc++.h>


using namespace std;

int gcd(int a, int b) {
	if (a % b == 0 || a == b) {
		return b;
	}
	return gcd(b%a , a);

}


int main() {

	int n,a,b;

	scanf(" %d", &n);

	for (int i=0; i < n; i++) {
		cin >> a >> b;
		cout << gcd(a, b) << endl;
	}



	return 0;
}