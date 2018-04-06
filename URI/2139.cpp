#include <bits/stdc++.h>

using namespace std;

int main () {
	

	int m,d;

	while (cin >> m >> d) {

		if (m == 12 && d == 25)
			cout << "E natal!" << endl;
		else if (m == 12 && d > 25) 
			cout << "Ja passou!" << endl;
		else if (m == 12 && d == 24)
			cout << "E vespera de natal!" << endl;
		else 
			cout << "Faltam " <<  (m - 1) * 30 - (30 - d) << " dias para o natal!" << endl;
	}

	return 0;
}