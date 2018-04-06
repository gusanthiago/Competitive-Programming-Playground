#include <bits/stdc++.h>

using namespace std;

#define huge unsigned long int

const int maxn = 13;

int main () {
	
 	huge a,b;

 	while (1) {
 		scanf("%lu %lu", &a, &b);
 		if (a + b == 0) break;
 		int carry = 0,result[maxn], sumP;
 		memset(result, 0, sizeof result);

 		for (int i = 0,tot = maxn - 2; i < tot; i++) {
 			sumP = a % 10 + b % 10 + result[i];
 			if (sumP >= 10) {
 				result[i+1] += 1;
 				carry++; 
 			} 
			a = a / 10;
			b = b / 10;
 		}

 		if (! carry) 
			printf("No carry operation.\n");
		else if (carry == 1) 
			printf("%d carry operation.\n", carry);
		else			
			printf("%d carry operations.\n", carry);
		
 	}


	return 0;
}