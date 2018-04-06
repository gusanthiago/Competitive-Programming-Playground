#include <bits/stdc++.h>

using namespace std;

map<char, double> composite;

void defineComp() {

	composite['W'] = 1;
	composite['H'] = 1.0 / 2;
	composite['Q'] = 1.0 / 4;
	composite['E'] = 1.0 / 8;
	composite['S'] = 1.0 / 16;
	composite['T'] = 1.0 / 32;
	composite['X'] = 1.0 / 64;

}


int main () {

	defineComp();
	string n;

	while(1) {
		getline(cin, n);
		if (n == "*") break;

		int sum = 0;
		double tmp = 0;
		//cout << n << endl;
		for (int i=0; i < n.size(); i++) {
			tmp += composite[n[i]];
			//cout << composite[n[i]]  << " " << n[i] << endl;
			if (n[i] == '/') {
				sum += tmp == 1 ? 1 : 0; 
				//cout << "soma == " << sum << endl; 
				tmp = 0;
			} 
		}
		cout << sum << endl;

	}


	return 0;	
}