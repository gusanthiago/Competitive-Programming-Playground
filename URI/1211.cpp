#include <bits/stdc++.h>

using namespace std;

int main() {

	string phone,pattern;
	vector<string> phones;
	int n, count, sizeAll;


	while (cin >> n) {
		
		cin.ignore();

		phones.clear();

		for (int i=0; i < n; i++) {
			getline(cin, phone);
			phones.push_back(phone);
		}

		sort(phones.begin(), phones.end());

		pattern = phones[0];
		sizeAll = pattern.size();
		count = 0;


		for (int i=1; i < n; i++) {
			for (int j=0; j < sizeAll; j++) {
				if (pattern[j] == phones[i][j]) {
					count++;
				}
				if (pattern[j] != phones[i][j]) {
					break;
				} 
			}
			pattern = phones[i];
		}
		cout << count << endl;

	}




	return 0;
}