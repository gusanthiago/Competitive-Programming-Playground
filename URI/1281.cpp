#include <bits/stdc++.h>

using namespace std;

int main () {

	int n, t, qnt;
	map<string, double> mapa;
	string fruit;
	double price;

	cin >> n;

	while (n--) {

		cin >> t;
		cin.ignore();
		while (t--) {
			cin >> fruit >> price;
			mapa[fruit] = price;
		}
		cin >> t;
		cin.ignore();
		price = 0;
		while (t--) {
			cin >> fruit >> qnt;
			price += mapa[fruit] * qnt;
		}
		printf("R$ %.2f\n", price);

	}



	return 0;
}