#include <bits/stdc++.h>

using namespace std;

bool isTautograma(string n) {

	char initial = tolower(n[0]);

	for (int i=0; i < n.size() - 1; i++) {
		if (n[i] == ' ' && isalpha(n[i + 1])) {
			if (tolower(n[i + 1]) != initial) return false; 
		}
	}



	return true;
}

int main() {

	string n;

	while (getline(cin, n)) {
		if (n[0] == '*') break;
		cout << (isTautograma(n) ? 'Y' : 'N') << endl;
	}



	return 0;
}