#include <bits/stdc++.h>

using namespace std;


int main () {
	
	char c;
	string n;
	bool flagZero;

	while(cin >> c >> n) {
		// getchar();
		if (c == '0' && n[0] == '0') break;

		flagZero = true;

		for (int i=0; i < n.size(); i++) {
			if (n[i] == c) {
				n[i] = '\0';
			} else {
				if (flagZero && n[i] == '0') {
						n[i] = '\0';
				} else {
					flagZero = false;
					cout << n[i];
				} 
			}

		}

		if (flagZero) {
			cout << "0";
		}
		cout << endl;

	}




	return 0;
}