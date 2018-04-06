#include <bits/stdc++.h>

using namespace std;

const int maxn = 1010;

int main () {

	int n, t, tI, cont;
	vector<int> norm;
	bool flag[maxn];
	cin >> n;

	while (n--) {

		cin >> t;
		norm.clear();
		while (t--) {
			cin >> tI;
			norm.push_back(tI);
		}
		
		cont = 0;

		for (int i=0; i < norm.size(); i++) flag[i] = false;

		for (int i=0; i < norm.size(); i++) {
			int aux = i;
			for (int j=i; j < norm.size(); j++) {
				if (norm[aux] < norm[j]) {
					aux = j;
				}
			}
			int troca = norm[i];
			norm[i] = norm[aux];
			norm[aux] = troca;
			if (norm[i] != norm[aux]) {
				flag[i] = true;
				flag[aux] = true;
			}

		}
		for (int i=0; i < norm.size(); i++) if (flag[i]) cont++;

		// for (int i=0; i< norm.size(); i++) cout << norm[i] << " ";
		// cout << endl;

		cout << norm.size() - cont << endl;

	}





	return 0;
}