#include <bits/stdc++.h>

using namespace std;

int lightChristmas(long long int n) {

	long long int rest = 2251799813685248;
	string line = "";

	while (1) {
		if (rest == 1) {
			if (n == 1) line += '1';
			break;
		} else if (n < rest) {
			rest /= 2;
			line += '0';
		} else {
			line += '1';
			n -= rest;
			rest /= 2;
		}
	}

	int count = 0, maxCount = 0;
	for (int i=0; i < line.size(); i++) {
		if (line[i] == '1') {
			count++;
			maxCount = max(count, maxCount);
		}
		if (line[i] == '0') {
			count = 0;
		}
	}

	return maxCount;
}


int main() {

	long long int n, numb;
	string line;

	cin >> n;

	while (n--) {
		cin >> numb;
		cout << lightChristmas(numb) << endl;
	}


}