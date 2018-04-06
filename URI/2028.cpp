#include <bits/stdc++.h>

using namespace std;

const int maxn = 200 * 200;
const int maxm = 210;
int seq[maxn];
int contagem[maxm];

void geraSeq() {

	int cont = 1, i = 0, numberInN = 0;
	seq[0] = 0;
	contagem[0] = cont;

	while (cont <= 200) {
		for (int j = 0; j < cont; j++)
			seq[++i] = cont;
		contagem[++numberInN] = contagem[numberInN - 1] + cont;
		cont++;
	}
}

int main () {

	int n, caseI = 1;
	geraSeq();

	while (cin >> n) {

		cout << "Caso " << caseI++ << ": " << contagem[n] << " " << (contagem[n] > 1 ? "numeros" : "numero") << endl;
		for (int i=0; i < contagem[n]; i++) {
			cout << seq[i];
			if (i + 1 != contagem[n])
				cout << " ";
		}
		cout << endl << endl;
	}



	return 0;
}