#include <bits/stdc++.h>

using namespace std;

string selectReindeer(int sum) {

	string listReindeer[] = {
		"Dasher", 
		"Dancer", 
		"Prancer", 
		"Vixen", 
		"Comet", 
		"Cupid", 
		"Donner", 
		"Blitzen",
		"Rudolph"
	};

	int flagSelect = -1;
	while (sum--) {
		flagSelect++;
		if (flagSelect == 9) flagSelect = 0;
	}
	return listReindeer[flagSelect];
}

int main() {

	int sum = 0, n;

	while (cin >> n) {
		sum += n;
	}
	cout << selectReindeer(sum) << endl;
	return 0;
}