#include <bits/stdc++.h>

using namespace std;

int main () {

	int p,n, temp, statusFrog;
	bool flag = 1;
	cin >> p >> n;
	statusFrog = p;
	while (n--) {
		cin >> temp;
		statusFrog += p;
		if (statusFrog < temp || statusFrog-p*2 > temp) {
			flag = 0;
		} else {
			statusFrog = temp;
		}
	}

	cout << (flag ? "YOU WIN" : "GAME OVER") << endl;

	return 0;
}