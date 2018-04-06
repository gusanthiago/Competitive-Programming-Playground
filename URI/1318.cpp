#include <bits/stdc++.h>

using namespace std;

const int maxn = 10000;
const int maxm = 20010;

int tickets[maxm];

int countRepetition(int maxAtual) {
	int rep = 0;
	for (int i = 1; i <= maxAtual; i++) {
		if (tickets[i] > 1) {
			// cout << "ticket {" << i << "} = " << tickets[i] << endl;;
			rep += 1;
		}
		tickets[i] = 0;
	}
	return rep;
}


int main() {


	int n,t,tmp, maxTmp;
	while (cin >> n >> t) {
		if (n + t == 0) break;
		maxTmp = -1;
		
		for (int i=0; i < t; i++) {
			cin >> tmp;
			tickets[tmp]++;
		}
		cout << countRepetition(n) << endl;

	}




	return 0;
}