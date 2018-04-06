#include <bits/stdc++.h> 

using namespace std;

int main () {

	int n;
	long long int t;

	cin >> n;

	while (n--) {

		cin >> t;
		t -= 2014; 
		if (t > 0) {
			cout << abs(t) << " A.C." << endl; 
		} else {
			cout << abs(t - 1) << " D.C." << endl;
		}

	} 

	return 0;
}