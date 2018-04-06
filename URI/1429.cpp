#include <bits/stdc++.h>

using namespace std;

int factPd[7];

void memsetFactPd() {
	int result;
	for (int i=1; i < 7; i++) {
		result = 1;
		for (int j=1; j <= i; j++) {
			result *= j;
		}
		factPd[i] = result;
	}
}

int extractResult(int n) {
	int wherePd = 1, result = 0;
	while (n >= 10) {
		result += factPd[wherePd] * (n % 10);
		n /= 10;
		wherePd++;
	}
	return result + (factPd[wherePd] * n);
}

int main() {

	memsetFactPd();
	
	int n;

	cin >> n;
	while (n != 0) {

		cout << extractResult(n) << endl;


		cin >> n;
	}


	return 0;
}