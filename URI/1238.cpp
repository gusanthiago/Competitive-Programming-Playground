#include <bits/stdc++.h>

using namespace std;

int main () {

	int n,max;
	string a,b;
	cin >> n;
	while (n--) {
		cin >> a >> b;
		
		max = a.size() > b.size() ? a.size() : b.size();

		for (int i=0; i < max; i++) {

			if (i < a.size()) cout << a[i];
			if (i < b.size()) cout << b[i];

		}
		cout << endl;	
	}





	return 0;
}