#include <bits/stdc++.h>

using namespace std;

const int MAXN = 10010;

int pd[MAXN];

void makePd() {

	int i = 0, j = 0, result;
	result = i * i + j * j;
	while (result < MAXN) {

		while (result < MAXN) {
			j++;
			pd[result] = 1;
			result = i * i + j * j;
		}
		j = 0;
		i++;
		result = i * i + j * j;	
	}	
}


int main() {

	makePd();

	int n;

	while (cin >> n) {
		cout << (n >= 0 && pd[n] ? "YES" : "NO") << endl; 
	}

	return 0;
}