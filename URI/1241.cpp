#include <bits/stdc++.h>

using namespace std;


int main () {

	int n;

	string a,b;

	cin >> n;

	while (n--) {
		cin >> a >> b;

		bool encaixa = false;

		if (a.size() >= b.size()) {
			encaixa = true;
			int iA = a.size() - 1, iB =  b.size() - 1;
			while(iA >= 0 && iB >= 0) {
				if (a[iA--] != b[iB--]) encaixa = false;
			}

		}

		cout << (encaixa ? "encaixa" : "nao encaixa") << endl;


	}


	return 0;
}