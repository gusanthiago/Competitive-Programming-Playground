#include <bits/stdc++.h>

using namespace std;

typedef struct {
	int d,e;
}boot;

int main() {

	char c;
	int n, nI,cont;
	map<int, boot> saveBoot;

	while (cin >> n) {
		
		cont = 0;
		map<int, boot> saveBoot;

		for (int i=0; i < n; i++) {
			cin >> nI >> c;
			// cout << nI << " " << c << endl;;
			if (c == 'D') {
				saveBoot[nI].d++;
				// cout << "entrou na direita" << endl;
			}	else if (c == 'E') {
				saveBoot[nI].e++;

				// cout << "entrou na esquerda" << endl;
			}

		}
		for(map<int, boot>::iterator it = saveBoot.begin(); it != saveBoot.end(); it++ ) {
			cont += min(it->second.d, it->second.e);
		}

		cout << cont << endl;

	}





	return 0;
}