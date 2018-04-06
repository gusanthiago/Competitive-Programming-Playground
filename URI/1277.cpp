#include <bits/stdc++.h>

using namespace std;

const int maxn = 110;

bool isGoExams(string frequence) {

	double presents = 0,ausents = 0;
	for (int i=0; i < frequence.size(); i++) {
		if (frequence[i] == 'A') ausents++;
		if (frequence[i] == 'P') presents++;
	}	

	// 100  ----- presents + ausents
	//  x	  ----- presents

	return 100 * presents / (presents + ausents) >= 75 ? true : false;
}


int main() {

	int t, n;
	string students[maxn], frequence;

	cin >> t;

	while (t--) {
		cin >> n;
		// cin.ignore();
		for (int i=0; i < n; i++) {
			cin >> students[i];
		}
		bool flagPrintFirst = false;

		for (int i=0; i < n; i++) {
			cin >> frequence;
			if (! isGoExams(frequence)) {
				if (flagPrintFirst) cout << " ";
				cout << students[i];
				flagPrintFirst = true;
			}
		}
		cout << endl;



	}



	return 0;
}