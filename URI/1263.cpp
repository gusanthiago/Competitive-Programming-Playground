#include <bits/stdc++.h>

using namespace std;

int main() {

	string line;
	int alphabet[30];

	while (getline(cin, line)) {

		memset(alphabet, 0, sizeof alphabet);
		int contInteracao = 0, contEquals = 0;
		char run = '\0';

		for (int i=0; i < line.size() - 1; i++) {
			if (i == 0 || (line[i - 1] == ' ')) {
				if (tolower(line[i]) == run) {
					if (! contEquals) contInteracao++;
					contEquals++;

				} else {
					run = tolower(line[i]);
					contEquals = 0;
				}
			}
		}
		cout << contInteracao << endl;

	}




	return 0;
}