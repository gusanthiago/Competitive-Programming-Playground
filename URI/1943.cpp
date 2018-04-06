#include <bits/stdc++.h>

using namespace std;

int main() {

	int k, iK = 0;
	int kSeq[] = {1, 3, 5, 10, 25, 50, 100};

	cin >> k;

	while (k > kSeq[iK]) {
		iK++;
	}
	cout << "Top " << kSeq[iK] << endl;


	return 0;
}