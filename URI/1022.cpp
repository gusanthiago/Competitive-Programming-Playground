#include <bits/stdc++.h>

typedef struct  {
	int num,den;
}rac;
using namespace std;

int n,n1,n2,d1,d2;
char op;
rac result;

rac simplifica() {

	rac novo;
	novo.num = result.num;
	novo.den = result.den;

	int lim = abs(min(novo.num, novo.den));

	for (int i=2; i <= lim; i++) {

		while (novo.num % i == 0 && novo.den % i ==0) {
			novo.num = novo.num / i;
			novo.den = novo.den / i;
		}
	}


	return novo;
}

int main () {



	scanf ("%d ",&n);
	while (n--) {

		scanf ("%d / %d %c %d / %d", &n1, &d1, &op, &n2, &d2);

		switch(op) {
			case '+':
				result.num = n1*d2 + n2*d1;
				result.den = d1*d2;
			break;
			case '-':
				result.num = n1*d2 - n2*d1; 
				result.den = d1*d2;
			
			break;
			case '/':
				result.num = n1*d2; 
				result.den = n2*d1;
			
			break;
			case '*':	
				result.num = n1*n2; 
				result.den = d1*d2;

			
			break;
		}

		rac simpl = simplifica();

		cout << result.num << "/" << result.den << " = " << simpl.num << "/" << simpl.den << endl;




	}



	return 0;
}