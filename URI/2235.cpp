#include <bits/stdc++.h>

using namespace std;

int main () {


	int a, b, c;

	while (cin >> a >> b >> c) {
	// 31 110 79
		if (a + b - c == 0 || 
			  a - (b + c) == 0 ||
			  a + (c - b) == 0 ||
			  a - c == 0 ||
			  a - b == 0 || 
			  b - c == 0) {
			cout << "S" << endl;
		} else {
			cout << "N" << endl;
		}
	}


	return 0;
}