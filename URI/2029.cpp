#include <bits/stdc++.h>

using namespace std;


int main () {

	double d,v;
	while (cin >> v) {
		cin >> d;
		double div = (d / 2);
		double area = 3.14 * (div * div);
		printf ("ALTURA = %.2f\n", v/area);
		printf ("AREA = %.2f\n", area);

	}




	return 0;
}