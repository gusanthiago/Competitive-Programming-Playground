#include <bits/stdc++.h>

using namespace std;

int main () {

	char n[100];
	scanf("%s", n);
	int numbC = strlen(n);
	for (int i=numbC - 1, j = 0; j < numbC / 2; i--, j++) {
		char tmp = n[j],aux = n[i];
		n[i] = tmp;
		n[j] = aux;
	}
	printf("%s\n", n);


	return 0;
}