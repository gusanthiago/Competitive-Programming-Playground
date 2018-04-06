#include <bits/stdc++.h>

using namespace std;

int main () {

	int n, cont;
	string line;
	stack<char> diamonds;

	cin >> n;
	cin.ignore();
	while (n--) {
		cont = 0;
		getline(cin, line);
		for (int i=0; i < line.size(); i++) {
			if (line[i] == '<') { 
				diamonds.push(line[i]);
			} else if (line[i] == '>' && ! diamonds.empty()) {
				if (diamonds.top() == '<') {
					cont++;
					diamonds.pop();
				}
			}
		}
		while (! diamonds.empty()) diamonds.pop();

		cout << cont << endl;


	}


	return 0;
}