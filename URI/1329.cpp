#include <bits/stdc++.h>

using namespace std;


int main () {


	int n, countM, countJ,nI;
	cin >> n;

	while (n != 0) {
		countM = 0;
		countJ = 0;
		while (n--) {
			cin >> nI;
			if (! nI) countM ++; 
			else countJ++;
		}
		cout << "Mary won " << countM << " times and John won " << countJ << " times" << endl;

		cin >> n;
	}



	return 0;
}