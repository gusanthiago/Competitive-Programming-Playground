#include <bits/stdc++.h>

using namespace std;

int main () {


	int n, h, m, o;

	cin >> n;

	while (n--) {
		cin >> h >> m >> o;
		
		if (h < 10) cout << "0" << h;
		else cout << h;
		cout << ":";
		if (m < 10) cout << "0" <<  m << " - "; 
		else cout << m << " - ";

		
		if (o == 1 )
		 cout << "A porta abriu!";
		else
			cout << "A porta fechou!";
		cout << endl;
	}


	return 0;
}