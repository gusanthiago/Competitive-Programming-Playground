#include <bits/stdc++.h>

using namespace std;

int const maxn = 26;

int main () {

	int n,cont;
	int alphabet[maxn + 2];
	string line;


	cin >> n;
	cin.ignore();
	
	while (n--) {
		getline(cin, line);
		memset(alphabet, 0, sizeof alphabet);
		cont = 0;
		for (int i = 0; i < line.size(); i++) {
			if (isalpha(line[i])) {
				alphabet[tolower(line[i]) - 'a']++;
				if (alphabet[tolower(line[i]) - 'a'] == 1) cont++;
			}
		}
		printf("frase ");
		if (cont == maxn) printf("completa\n");
		else if (cont < (maxn / 2)) printf("mal elaborada\n");
		else printf("quase completa\n");
	
	}



	return 0;
}