#include <bits/stdc++.h>

using namespace std;

/////////
//  N  //
//O   L//
//  S  //
/////////


int main () {


	int n;
	int flag;
	char pos[] = {'N', 'L', 'S', 'O'};
	char temp;

	while (cin >> n) {
		if (n == 0) break;
		getchar();
		flag = 0;

		for (int i=0; i < n; i++) {
			temp = getchar();
			if (temp == 'E') flag = flag == 0 ? 3 : flag - 1;
			else if (temp == 'D') flag = flag == 3 ? 0 : flag + 1; 
		}

		cout << (char)pos[flag] << endl;
	}



	return 0;
}