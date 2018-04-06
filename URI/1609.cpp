#include <bits/stdc++.h>

using namespace std;

int main() {

	long long int count;
	int t, n;
	string number;

	cin >> t;
	while (t--) {

		map<string, bool> verifiedIsExist;
		count = 0;

		cin >> n;
		cin.ignore();


		for (int i=0; i < n; i++) {
			cin >> number;
			if (verifiedIsExist[number] == NULL) {
				count++;
			}
			verifiedIsExist[number] = true;
		}
		cin.ignore();
		printf("%lld\n", count);


	}





	return 0;
}