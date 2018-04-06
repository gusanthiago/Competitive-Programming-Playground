#include <bits/stdc++.h>

using namespace std;

const int maxn = 10010;

bool isPrime(int n) {

	if (n <= 1) return false;
	if (n == 2) return true;
	else {
		int lim = sqrt(n);
		for (int i=2; i <= lim; i++) {
			if (n % i == 0) {
				// cout << i << " divide "<< n << endl; 
				return false;
			}
		}
		return true;
	}

}


string classifyPrime(int n) {

	if (! isPrime(n)) {
		return string ("Nada");
	} else {

		bool isSuperPrime = true;
		int aux = 0;

		while (n >= 10 ) {
			aux = n % 10;
			if (! isPrime(aux)) {
				isSuperPrime = false;
			}
			n /= 10;
		}
		if (! isPrime(n)) {
			isSuperPrime = false;
		}

		if (isSuperPrime) {
			return string ("Super");
		} else {
			return string ("Primo");
		}


	}


} 


int main() {

	int n;
	// cout << isPrime(2323) << endl;
	// cout << isPrime(3) << endl;
	// cout << isPrime(9) << endl;
	// cout << isPrime(2) << endl;

	while (cin >> n ){
		cout << classifyPrime(n) << endl;
	}


	return 0;
}