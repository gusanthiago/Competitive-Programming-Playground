#include <bits/stdc++.h>

using namespace std;

int main () {


	int n;

	cin >> n;

	string l;
	getchar();
	while(n--) {
	
		getline(cin, l);
		printf("%.2f\n", l.size() / 100.0);
	}




	return 0;
}