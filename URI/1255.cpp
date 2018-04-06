#include <bits/stdc++.h>

using namespace std;

int main () {

	int n, maior;
	string line;
	int alphabet[30];

	cin >> n;
	getchar();
	while (n--) {
		getline(cin, line);
		memset(alphabet, 0, sizeof alphabet);
		maior = 0;

		for (int i=0; i < line.size(); i++) {
			if (isalpha(line[i])) {
				alphabet[tolower(line[i]) - 'a']++;
				if (alphabet[tolower(line[i]) - 'a'] > maior) {
					maior = alphabet[tolower(line[i]) - 'a'];
				}

			}
		}	

		for (int i=0; i < 30; i++)
			if (alphabet[i] == maior) 
				cout << (char)('a' + i);

		cout << endl;
		



	}



	return 0;
}