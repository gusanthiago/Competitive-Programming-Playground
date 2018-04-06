#include <bits/stdc++.h>

using namespace std;

bool cmpstr (string a, string b) {
	if (a.compare(b) == 0) return true;
	return false;
}

int main () {


	int n;
	string a,b;

	cin >> n;
	getchar();
	while (n--) {
		getline(cin, a);
		getline(cin, b);

		if (cmpstr(a,"ataque") && cmpstr(b,"ataque"))
			cout << "Aniquilacao mutua" << endl;
		else if (cmpstr(a,"pedra") &&  cmpstr(b,"pedra")) 
			cout << "Sem ganhador" << endl;
		else if (cmpstr(a,"papel") && cmpstr(b,"papel")) 
			cout << "Ambos venceram" << endl;
		else if ((cmpstr(a,"ataque") && (cmpstr(b,"pedra") || cmpstr(b,"papel"))) ||
						 (cmpstr(a,"pedra") && cmpstr(b,"papel")) )
			cout << "Jogador 1 venceu" << endl;
		else 
			cout << "Jogador 2 venceu" << endl;
			

	}




	return 0;
}