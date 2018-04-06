#include <bits/stdc++.h>

using namespace std;

const int maxn = 16;
const int maxm = 128;

int main () {

	int n,qt,s,minDiffIndex, minDiff;
	int students[maxn];

	cin >> n;

	while (n--) {
		cin >> qt >> s;

		cin >> students[0];
		minDiffIndex = 0;	
		minDiff = abs(students[0] - s);

		for (int i=1; i < qt; i++) {
			cin >> students[i];
			if (abs(students[i] - s) < minDiff) {
				minDiff = abs(students[i] - s);
				minDiffIndex = i;
			}

		}
		cout << minDiffIndex + 1 << endl;

	}





	return 0;
}