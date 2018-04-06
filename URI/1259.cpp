#include <bits/stdc++.h>

using namespace std;

int main () {

	vector<int> impar,par;
	int n, t;

	cin >> n;

	while (n--) {
		cin >> t;
		if (t % 2 == 0) par.push_back(t);
		else impar.push_back(t);

	}
	sort(par.begin(), par.end());
	sort(impar.begin(), impar.end(), greater<int>());

	for (int i=0; i < par.size(); i++) cout << par[i] << endl;
	for (int i=0; i < impar.size(); i++) cout << impar[i] << endl;


	return 0;
}