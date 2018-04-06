#include <bits/stdc++.h>

using namespace std;

int main() {

	int n;
	string rajesh, sheldon;

	cin >> n;
	while (n--) {
		cin >> rajesh >> sheldon;
		if (sheldon == rajesh) {
			cout << "empate" << endl;
		} else if ((rajesh == "tesoura" && sheldon == "papel") || 
							 (rajesh == "papel" && sheldon == "pedra") || 
							 (rajesh == "pedra" && sheldon == "lagarto") || 
							 (rajesh == "lagarto" && sheldon == "spock") || 
							 (rajesh == "spock" && sheldon == "tesoura") ||
							 (rajesh == "tesoura" && sheldon == "lagarto") || 
							 (rajesh == "lagarto" && sheldon == "papel") || 
							 (rajesh == "papel" && sheldon == "spock") || 
							 (rajesh == "spock" && sheldon == "pedra") || 
							 (rajesh == "pedra" && sheldon == "tesoura")) {
			cout << "rajesh" << endl;
		} else {
			cout << "sheldon" << endl;
		}

	}





	return 0;
}