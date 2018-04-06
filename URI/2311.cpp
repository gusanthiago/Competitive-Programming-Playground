#include <bits/stdc++.h>


using namespace std;

const int maxnot = 7;

int main() {

	char line[1010];
	double mult,tmp,sum,min,max;
	int n;
	scanf(" %d", &n);

	while (n--) {
		// getchar();
		scanf("%s", line);
		scanf("%lf", &mult);
		scanf("%lf", &tmp);
		min = tmp * 1; max = tmp * 1;
		sum = tmp;
		for (int i=0; i < maxnot - 1; i++) {
			scanf(" %lf", &tmp);		 
			sum += tmp;
			if (tmp < min) {
				min = tmp;
			}
			if (tmp > max) {
				max = tmp;
			}
		}
		sum -= max + min;

		printf("%s %.2f\n", line, sum * mult);

	}



	return 0;
}