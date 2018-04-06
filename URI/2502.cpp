#include <bits/stdc++.h>

using namespace std;

int main () {

	int c,n;
	string text,line1, line2;
	map<char, char> cipher;
	bool flag;

	while (scanf(" %d %d", &c, &n) != EOF) {
		getchar();
		getline(cin, line1);
		getline(cin, line2);
		cipher.clear();

		for (int i=0; i < line1.size(); i++) {
			cipher[tolower(line1[i])] = line2[i];
			cipher[tolower(line2[i])] = line1[i];
		}
		while (n--) {
			getline(cin, text);
			flag = true;
			char cP = ' ';
			for (int i=0; i < text.size(); i++) {
				cP = (char)text[i];
				if (cipher[tolower(text[i])]) {
					cP = (char)cipher[tolower(text[i])];
				}
				cP = isupper(text[i]) ? toupper(cP) : tolower(cP);
				cout << cP;
			}
			cout << endl;
		}
		cout << endl;

	}


	return 0;
}