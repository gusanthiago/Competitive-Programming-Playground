#include <bits/stdc++.h>

using namespace std;

int main () {

	int p,j1,j2,r,a;

	cin >> p >> j1 >> j2 >> r >> a;

	if (r + a == 2) {
		cout << "Jogador 2 ganha!" << endl;
	} else  if ((r == 1 && a == 0) || (a == 1 && r == 0 )) {
		cout << "Jogador 1 ganha!" << endl;	
	} else {
		int result = (j1+j2) % 2 == 0;
		if (result) {
			cout << (p == 1 ? "Jogador 1 ganha!" : "Jogador 2 ganha!") << endl;
		} else {
			cout << (p == 0 ? "Jogador 1 ganha!" : "Jogador 2 ganha!") << endl;	
		}
	}

	
	return 0;
}