#include <bits/stdc++.h>

using namespace std;

int main() {

	int n, k, tmp, count = 0, aux;
	vector<int> vet;
	cin >> n;
	cin >> k;
	while (n--) {
		cin >> tmp;
		vet.push_back(tmp);
	}

	sort(vet.begin(), vet.end());

	aux = vet[vet.size() - k];
	for (int i=vet.size() - 1; i >= 0; i--) {
		if (aux > vet[i]) break;
		count++;
	}
	cout << count << endl;





	return 0;
}