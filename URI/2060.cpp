#include <bits/stdc++.h>

using namespace std;

int main () {



	int n,tmp,n2 = 0,n3 = 0,n4 = 0,n5 = 0;

	cin >> n;

	while (n--) {

		cin >> tmp;
		if (tmp % 2 == 0)
			n2++;
		if (tmp % 3 == 0)
			n3++;
		
		if (tmp % 4 == 0)
			n4++;
					
		if (tmp % 5 == 0)
			n5++;	

	}

	cout << n2 << " Multiplo(s) de 2" << endl;
	cout << n3 << " Multiplo(s) de 3" << endl;
	cout << n4 << " Multiplo(s) de 4" << endl;
	cout << n5 << " Multiplo(s) de 5" << endl;


	return 0;
}