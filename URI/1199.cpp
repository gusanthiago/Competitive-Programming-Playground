#include <bits/stdc++.h>

using namespace std;

const int maxn = 100;

int main () {

	char x[maxn];	
	int result;
	while (scanf(" %s", x)) {
		if (x[0] == '-')	break;

		int tam = strlen(x);
		if (tam > 2 && x[0] == '0' && x[1] == 'x') {
			for (int i=0; i < tam; i++) x[i] = tolower(x[i]); 
			sscanf(x, "0x%x", &result);
			printf("%d\n", result);

		} else {
			sscanf(x, "%d", &result);
			printf("0x%X\n", result);
		}
		for (int i=0; i < tam; i++) x[i] = 0;

	}



	return 0;
}