#include <bits/stdc++.h>

using namespace std;


int main () {

	long long int sumStars,n,xI, roubados, numberStars, tmp, vMod;
	vector<long int> vet, starAttack;

	cin >> n;

	sumStars = 0;
	roubados = 0;
	numberStars = 0;

	for (int i=0; i < n; i++) {
		cin >> tmp;
		vet.push_back(tmp);
		sumStars += tmp;
		starAttack.push_back(1);
	}

	xI = 0;
	while (1) {
		
		if (starAttack[xI]) {
			numberStars++;
			starAttack[xI] = 0;
		}	

		vMod = vet[xI];
		if (vet[xI]) {
			roubados++;
			vet[xI] -= 1;
		}
		if (vMod % 2 != 0) { 
			xI += 1;
		} else {
			xI -= 1;
		}

		if (xI >=	 n || xI < 0) break;
	} 

	cout << numberStars  << " " << sumStars - roubados << endl;


	return 0;
}