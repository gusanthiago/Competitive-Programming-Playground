#include <bits/stdc++.h>

using namespace std;

const int maxn = 128;

int vet[maxn];

int main() {

	int n, t, p, iSame;
	char line[100];


	cin >> t;
	while (t--) {
		cin >> n;
		cin.ignore();
		p = 0;
		for (int i=0; i < n; i++) {
			fgets(line, 101, stdin);
			int size = strlen(line);
			if (size == 6) { 
				vet[i] = 1;
				p++;
			}
			else if (size == 5) {
				p--;
				vet[i] = -1;
			} 
			else {
				sscanf(line, "SAME AS %d", &iSame);
				vet[i] = vet[iSame - 1];
				p += vet[iSame - 1];
			} 
		}

		cout << p << endl;

	}




	return 0;
}