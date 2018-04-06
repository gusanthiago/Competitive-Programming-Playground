#include <bits/stdc++.h>

using namespace std;

int main() {

	int n, k, ki;
	string resp[] = {
		"Rolien",
		"Naej",
		"Elehcim",
		"Odranoel"
	};
	cin >> n;

	while (n--) {

		cin >> k;

		while (k--) {
			cin >> ki;
			cout << resp[ki - 1] << endl;; 
		}

	}



	return 0;
}