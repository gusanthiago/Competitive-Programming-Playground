#include <bits/stdc++.h>

using namespace std;

int main() {


	int n,la,lb,sa,sb;

	cin >> n;
	cin >> la >> lb;
	cin >> sa >> sb;

	if (n >= la && n <= lb && n >= sa && n <= sb) printf("possivel");
	else printf("impossivel");
	printf("\n");



	return 0;
}