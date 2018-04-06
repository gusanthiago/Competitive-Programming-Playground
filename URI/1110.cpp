#include <bits/stdc++.h>

using namespace std;

int main () {

	int n, moveToLast, sizeT;
	queue<int> q;

	while (scanf(" %d", &n) && n != 0) {

		for (int i=1; i <= n; i++) q.push(i);

		printf("Discarded cards: %d", q.front());
		q.pop(); moveToLast = q.front();q.pop();
		q.push(moveToLast);
		sizeQ = 
		while (q.size() > 1) {

		  printf(", %d", q.front());
		  q.pop(); moveToLast = q.front(); q.pop();
		  q.push(moveToLast);

		}

		printf("\nRemaining card: %d\n", q.front());
		q.pop();


	}



	return 0;
}