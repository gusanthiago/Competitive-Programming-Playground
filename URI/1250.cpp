#include <bits/stdc++.h>

using namespace std;

const int maxn = 64;

int seq[maxn];

int main() {

	int n,t, count;
	string state;

	cin >> n;
	
	while (n--) {

		cin >> t;

		for (int i=0; i < t; i++) {
			cin >> seq[i];
		}
		cin.ignore();
		getline(cin, state);
	
		count = 0;

		for (int i=0; i < t; i++) {
			if ((state[i] == 'S' && seq[i] <= 2) || (state[i] == 'J' && seq[i] > 2)) count++;

		}

		cout << count << endl;

	}





	return 0;
}