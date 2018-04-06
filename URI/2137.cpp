#include <bits/stdc++.h>

using namespace std;

int main() {

	int n;
	string k;
	vector<string> registered;

	while (cin >> n) {

		cin.ignore();
		registered.clear();
		for (int i=0; i < n; i++) {
			getline(cin, k);
			registered.push_back(k);
		}

		sort(registered.begin(), registered.end());
		for (int i=0; i < n; i++) {
			cout << registered[i] << endl;
		}

	}
}