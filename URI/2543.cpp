#include <bits/stdc++.h>

using namespace std;

const int CS = 0;

int main() {

	int n,id, idI, gameplay,countGamePlay;

	while(cin >> n >> id) {
		countGamePlay = 0;

		while (n--) {
			cin >> idI >> gameplay;
			if (idI == id && gameplay == CS) countGamePlay++;
		}

		cout << countGamePlay << endl;
	}





	return 0;
}	