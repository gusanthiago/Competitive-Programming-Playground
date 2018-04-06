#include <bits/stdc++.h>

using namespace std;


int main() {

	string dollar,cents;
	map<int, int> mapF;

	while(getline(cin, dollar)) {
		getline(cin, cents);
		
		mapF.clear();

		printf("$");
		

		for (int i = dollar.size() - 1, j = 1; i >= 0; i--, j++) {
			if (j % 3 == 0 && i != 0) mapF[i] = 1;
		}

		for (int i=0; i < dollar.size(); i++) {
			if (mapF[i]) {
				printf(",");
			}
			printf("%c", dollar[i]);
		}

		printf(".");
		cout << (cents.size() > 1 ? cents : "0" + cents) << endl;


	}


	return 0;
}