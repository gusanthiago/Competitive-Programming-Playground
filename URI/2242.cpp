#include <bits/stdc++.h>

using namespace std;

int main() {

	string line, vog = "";
	string vogais = "aeiou";


	getline(cin, line);

	for (int i=0; i < line.size(); i++) {
		if (vogais.find(tolower(line[i])) != -1) {
			vog += line[i];
		}
	}

	bool isEqual = true;
	int countSizeRun = vog.size() / 2;
	if (! vog.size()) isEqual = false;

	for (int i=0, j = vog.size() - 1; i < countSizeRun; i++, j--) {
		if (vog[i] != vog[j]) {
			isEqual = false;
			break;
		}
	}

	cout << (isEqual ? "S" : "N") << endl;;






	return 0;
}