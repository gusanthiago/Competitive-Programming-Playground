#include <bits/stdc++.h>

using namespace std;

string correctWord(string word) {
	if (word.size() != 3) {
		return word;
	}
	if (word.substr(0, 2) == "UR") {
		return string("URI");
	} 
	return word.substr(0, 2) == "OB" ? "OBI" : word;
}


int main() {

	int n;
	string word;

	cin >> n;
	cin.ignore();

	while (n--) {
		cin >> word;
		cout << correctWord(word);
		if (! n - 1) cout << " ";

	}
	cout << endl;

	return 0;
}