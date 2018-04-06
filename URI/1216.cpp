#include <bits/stdc++.h>

using namespace std;

int main () {

	string n;
	double sum = 0, numb;
	int divi = 0;

	while(getline(cin, n)) {
		cin >> numb;
		getchar();
		sum += numb;
		divi++;
		// cout << 
	}
	printf ("%.1f\n", (sum / divi));




	return 0;
}