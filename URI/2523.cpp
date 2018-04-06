#include <bits/stdc++.h>

using namespace std;

int main() {


	int n,l;
	string line;

	while (getline(cin, line)) {
		
		cin >> n;
		for (int i=0; i < n; i++) {
			cin >> l;
			cout << line[l - 1];
		}
		cout << endl;

		cin.ignore();
	}



	return 0;
}