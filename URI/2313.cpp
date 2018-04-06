#include <bits/stdc++.h>

using  namespace std;


int main () {

	int a, b, c;

	cin >> a >> b >> c;

	if (a >= b + c || b >= a + c || c >= b + a) {
		printf("Invalido\n");
	} else {
		if (a == b && b == c) {
			printf("Valido-Equilatero\n");
		} else if (a != b && b != c && a != c) {
			printf("Valido-Escaleno\n");	
		} else if (a == b || b == c || a == c) {
			printf("Valido-Isoceles\n");
		}

		int hip=100,cat1=100,cat2=100;
		
		if (a > b && a > c) {
			hip = a;
			cat1 = b;
			cat2 = c;
		} else if (b > a && b > c) {
			hip = b;
			cat1 = a;
			cat2 = c;
		} else if (c > a && c > b) {
			hip = c;
			cat1 = a;
			cat2 = b;
		}
		// cout << hip  << " " << cat1 << " " << cat2 << endl;
 
		printf("Retangulo: %c\n", (cat1 * cat1 + cat2 * cat2) == hip * hip ? 'S' : 'N');

	}


	return 0;
}	