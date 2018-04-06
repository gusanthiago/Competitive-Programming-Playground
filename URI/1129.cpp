#include <bits/stdc++.h>

using namespace std;


int main () {


	int n, tmp, quantGray, posA;
	char answer[] = {'A', 'B', 'C', 'D', 'E'};

	cin >> n;
	while(n) {
		while (n--) {
			
			quantGray = 0;
			posA = -1;

			for (int i=0; i < 5; i++) {
				cin >> tmp;
				if (tmp <= 127) {
					quantGray++;
					posA = i;
				}
			}

			if (quantGray == 1) printf("%c\n", answer[posA]);
			else printf("*\n");
		}
		cin >> n;	
	}



	return 0;
}