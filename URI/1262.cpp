#include <bits/stdc++.h>

using namespace std;

int countProcessing(int p, string processing) {

	int count = 0, flagPass = 0;

	for (int i=0, sizeProcessing = processing.size(); i < sizeProcessing; i++) {

		if (processing[i] == 'W') {
			count++;
			flagPass = 0;
			continue;
		}
		flagPass++;
		if (processing[i] == 'R' && flagPass == 1) {
			count++;
		}
		if (flagPass == p) {
			flagPass = 0;
			continue;
		}
	}
	return count;
}

int main() {

	int p;
	string processing;

	while (getline(cin, processing)) {
		cin >> p;	
		cin.ignore();
		cout << countProcessing(p, processing) << endl;

	}

	return 0;
}