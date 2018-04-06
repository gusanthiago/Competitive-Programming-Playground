#include <bits/stdc++.h>

using namespace std;


int main () {

	double n,min,max;

	scanf(" %lf", &n);
	min = n / log(n);
	max = min * 1.25506;  
	printf("%.1f %.1f\n", min, max);

	return 0;
}