#include <bits/stdc++.h>

using namespace std;


int main() {

	string dateAnt, date;
	bool isValidDate, isValidDateGeneral, selectDate;
	int n,d, dI;

	while (cin >> n >> d) {

		// cin.ignore();
		// cout << n << d << endl;;
		selectDate = false;
		for (int i=0; i < d; i++) {
			cin >> date;
			isValidDate = true;
			for (int j=0; j < n; j++) {
				cin >> dI;
				if (! dI) isValidDate = false;
			}
			if (isValidDate && ! selectDate) {
				selectDate = true;
				dateAnt = date;
			}
		}
		// cin.ignore();
		if (! selectDate) cout << "Pizza antes de FdI" << endl;
		else cout << dateAnt << endl;
		// return 0;3
	}






	return 0;
}