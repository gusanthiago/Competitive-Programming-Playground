#include <bits/stdc++.h>

using namespace std;

int main () {

	string line;

	while(getline(cin, line)) {

		for (int i=0; i < line.size(); i++) {
			if (isalpha(line[i])) {

				if (isupper(line[i])) {

					cout << (char)(line[i] + 13 <= 'Z' ? line[i] + 13:  'A' - 1+ (13 - ('Z' - line[i]))  );

				} else {
					cout << (char)(line[i] + 13 <= 'z' ? line[i] + 13:  'a' - 1 + (13 - ('z' - line[i]))  );

				}

			} else {
				cout << line[i];
			}
		}
		cout << endl;

	}

	return 0;
}