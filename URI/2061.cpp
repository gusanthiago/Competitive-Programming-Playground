#include <bits/stdc++.h>

using namespace std;

int main() {

	int n,m;


	cin >> n >> m;

	string op;

	while (m--) {
		getline(cin, op);

		if (op.compare("fechou") == 0) {
			n++;
		} else {
			n--;
		}

	}

	cout << n << endl;


	return 0;
}