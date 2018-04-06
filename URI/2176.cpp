#include <bits/stdc++.h>

using namespace std;

int main () {


	string n;

	while(getline(cin, n)) {

		int num = 0;

		for (int i=0; i < n.size(); i++) 
			if (n[i] == '1') num++;
		cout << n;
		if (num % 2 == 0) cout << "0";
		else cout << "1";
		cout << endl;
	}


	


	return 0;
}