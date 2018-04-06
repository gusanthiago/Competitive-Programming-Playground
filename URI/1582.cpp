#include <bits/stdc++.h>

using namespace std;

bool isTriplePytagoric(const int &a, const int &b, const int &c) {
	if (a > b && a > c && (a * a == b * b + c * c)) {
		return true;
	}
	if (b > a && b > c && (b * b == a * a + c * c)) {
		return true;
	}
	if (c > a && c > b && (c * c == a * a + b * b)) {
		return true;
	}
	return false;
}	

int gcd (int a, int b) {

	int rest = a % b;
	while (rest != 0) {
		a = b;
		b = rest;
		rest = a % b;
	}	
	return b;
}


string classifyPitaghoric(const int &a, const int &b, const int &c) {

	if (! isTriplePytagoric(a, b, c)) {
		return string("tripla");
	}

	if (gcd(gcd(a,b), c) == 1) {
		return string ("tripla pitagorica primitiva");
	}

	return string ("tripla pitagorica");
}


int main() {

	int a,b,c;

	while (cin >> a >> b >> c) {
		cout << classifyPitaghoric(a, b, c) << endl;
	}




	return 0;
}