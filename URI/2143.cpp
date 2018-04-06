#include <bits/stdc++.h>

using namespace std;


int main () {


	int t,n,sub;
	cin >> t;
	while (t != 0) {
		
		while(t--) {
			cin >> n;
			sub = 1;
			if (n % 2 == 0) sub++;
			cout << n * 2 - sub << endl; 
		}

		cin >> t	;
	}


	return 0;
}