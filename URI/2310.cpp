#include <bits/stdc++.h>

using namespace std;

int main () {

	int n;
	string line;
	cin >> n;
	double totS=0,totB=0,totA=0, s,b,a,totalS = 0, totalB=0, totalA=0;

	for (int i=0; i < n; i++) {
		cin.ignore();
		getline(cin, line);
		cin >> s >> b >> a;
		totalS += s;
		totalB += b;
		totalA += a;

		cin >> s >> b >> a;
		totS += s;
		totB += b;
		totA += a ;

	}

	// 100 ------ totalS
	//  x ------- totS
	printf("Pontos de Saque: %.2f %%.\n", totS * 100 / totalS);
	printf("Pontos de Bloqueio: %.2f %%.\n", totB * 100 / totalB);
	printf("Pontos de Ataque: %.2f %%.\n", totA * 100 / totalA);



	return 0;
}