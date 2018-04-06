#include <bits/stdc++.h>

using namespace std;

#define huge long long int

const int maxn = 10010;

huge mat[maxn];

int main() {

	huge n, i = 0, numb = -1;

	
	while (cin >> mat[i]) {

		if (i != 0 && numb == -1 && mat[i - 1] > mat[i]) {
			numb = mat[i - 1] + 1;
		}
		i++;
	}
	if (numb == -1) {
		numb = mat[i - 1] + 1;
	}
	cout << numb << endl;

	return 0;
}