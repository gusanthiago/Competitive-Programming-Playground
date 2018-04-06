#include <bits/stdc++.h>

using namespace std;

int main () {

	int t;
	double b,a1,d1,a2,d2,value1,value2;
	int level1, level2;

	scanf(" %d", &t);

	while (t--) {
		scanf(" %lf", &b);
		scanf(" %lf %lf %d", &a1, &d1, &level1);
		scanf(" %lf %lf %d", &a2, &d2, &level2);

		value1 = (a1 + d1) / 2;
		value1 = level1 % 2 == 0 ? value1 + b : value1;
		value2 = (a2 + d2) / 2;
		value2 = level2 % 2 == 0 ? value2 + b : value2;
		
		if (value1 == value2)
			printf("Empate\n");
		else if (value1 > value2) 
			printf("Dabriel\n");
		else 
			printf("Guarte\n");

	}




	return 0;
}