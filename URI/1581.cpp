#include <bits/stdc++.h>

using namespace std;



int main() {

	int n,k;
	bool isEnglish;

	cin >> n;
	while (n--) {
		cin >> k;

		cin.ignore();

		string idiomaLocal,next;
		getline(cin, idiomaLocal);
		isEnglish = false;

		for (int i=1; i < k; i++) {
			getline(cin, next);
			if (next != idiomaLocal) isEnglish = true;
		} 

		if (isEnglish) cout << "ingles" << endl;
		else cout << idiomaLocal << endl;




	}



	return 0;
}