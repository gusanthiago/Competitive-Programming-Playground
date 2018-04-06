#include <bits/stdc++.h>

using namespace std;

const int maxn = 10010;

int main () {

	int n,mult, pedido;
	double cardapio[maxn];

	cardapio[1001] = 1.50;
	cardapio[1002] = 2.50;
	cardapio[1003] = 3.50;
	cardapio[1004] = 4.50;
	cardapio[1005] = 5.50;

	double total = 0;

	cin >> n;

	while (n--) {
		cin >> pedido >> mult ;
		total += cardapio[pedido] * mult;
	}

	printf("%.2lf\n", total);



	return 0;
}