#include <bits/stdc++.h>

using namespace std;

int main () {

	vector<int> numb;
	int n = 4;
	int tmp;

	while (n--) {
		cin >> tmp;
		numb.push_back(tmp);
	}

	sort(numb.begin(), numb.end());
	// for (int i = 0; i < numb.size(); i++)
	// 	cout << numb[i] << endl;

	if (numb[0] + numb[1] >= numb[2])
		cout << "S" << endl;
	else
		cout << "N" << endl;




	return 0;
}