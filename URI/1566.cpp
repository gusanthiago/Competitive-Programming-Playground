#include <bits/stdc++.h>

using namespace std;

const int maxn = 256;

int alturas[maxn];

int main() {

	int nc,n,altI;

	scanf ("%d", &n);
	while (n--) {
		
	scanf ("%d", &nc);
		for (int i=0; i < nc; i++) {	
			scanf ("%d", &altI);
			alturas[altI]++;
		}

		bool flagFirst = false;
		for (int i=0; i < maxn; i++) {
			if (alturas[i]) {
				if (flagFirst) printf(" ");
				flagFirst = true;
				while(alturas[i]) {
					printf("%d", i);
					if (alturas[i] > 1) printf(" ");
					alturas[i]--;
				}
				while(alturas[i])alturas[i]--;
			} 	
		}
		printf("\n");

	}





	return 0;
}