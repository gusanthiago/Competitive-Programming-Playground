#include <bits/stdc++.h>

using namespace std;

int main() {


	int n, timeSubmission, timeTotal, accepted, questions[30];
	char letter; 
	string status;

	while (cin >> n) {
		if (! n) break;
		cin.ignore();

		timeTotal = 0;
		accepted = 0;
		memset(questions, 0, sizeof questions);

		for (int i=0; i < n; i++) {
			cin >> letter >> timeSubmission >> status;
			if (status[0] == 'c' ) {
				accepted++;
				timeTotal += questions[letter - 'A'] + timeSubmission;
			}
			if (status[0] == 'i') {
				questions[letter - 'A'] += 20;
			}
		}
		cout << accepted << " " << timeTotal << endl;
	}





	return 0;
}