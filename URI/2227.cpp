#include <bits/stdc++.h>

using namespace std;

const int maxa = 128;

int flyingNumber[maxa];

int main() {

	int a,v, markMax, from, to, countTest = 1;

	cin >> a >> v;
	while (a + v != 0) {

		for (int i=0; i < a; i++) flyingNumber[i] = 0;
		markMax = 0;

		for (int i=0; i < v; i++) {
			cin >> from >> to;
			// cout << from << " " << to << " " << endl;  
			from--;
			to--;
			flyingNumber[from]++;
			flyingNumber[to]++;
			if (flyingNumber[from] > markMax) {
				markMax = flyingNumber[from];
			}
			if (flyingNumber[to] > markMax) {
				markMax = flyingNumber[to];
			}
		}

		cout << "Teste " << countTest++ << endl;
		for (int i=0; i < a; i++) {
			if (flyingNumber[i] == markMax) {
				cout << i + 1 << " ";
			}
		}
		cout << endl << endl;


		cin >> a >> v;
	}





	return 0;
}