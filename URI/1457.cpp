#include <bits/stdc++.h>

using namespace std;

#define huge long long

huge n,k;

huge oracle() {
	huge result = n, i = 1;
	while (n - k * i >= 1) {
		result *= n - k * i;
		i++;
	}
	return result;
}


int main() {

	int t;
	string read_k;
	cin >> t;

	while (t--){
		cin >> n;
		cin >> read_k;
		k = read_k.size();
		cout << oracle() << endl;;
	}

	return 0;
}