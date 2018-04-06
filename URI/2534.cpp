#include <bits/stdc++.h>

using namespace std;

int main() {


	int n,q,tmp;
	vector<int> vet;

	while(cin >> n >> q) {
		vet.clear();
		for (int i=0; i < n; i++) {
			cin >> tmp;
			vet.push_back(tmp);
		}

		sort(vet.begin(), vet.end());

		for (int i=0; i < q; i++) {
			cin >> tmp;
			cout << vet[n - tmp] << endl;
		}

	}



	return 0;
}