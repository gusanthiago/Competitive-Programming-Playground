#include <bits/stdc++.h>

using namespace std;

string n,m;
int caseI = 0, countI,lastPos;

void fixPhase() {

	int sizeN = n.size(), sizeM = m.size(), diff;
	diff = sizeM - sizeN;
	countI = 0;
	for (int i=0; i <= diff; i++) {

		if (n[0] == m[i]) {
			int flagI = i;
			for (int j=0;j < sizeN; j++) {
				if (m[i + j] == n[j]) {
					flagI++;
				}
				else
					break;
				if (j == sizeN - 1) {
					countI++;
					lastPos = i + 1;
				}

			}
		}


	}


}

int main () {


	while (getline(cin, n)) {
		getline(cin, m);

		fixPhase();

		cout << "Caso #" << ++caseI << ":" << endl;
		if (countI) {
			cout << "Qtd.Subsequencias: " << countI << endl;
			cout << "Pos: " << lastPos << endl;
		} else {
			cout << "Nao existe subsequencia" << endl;
		}
		cout << endl;


	}



	return 0;
}	