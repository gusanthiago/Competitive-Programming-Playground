#include <bits/stdc++.h>

using namespace std;

int main () {

	int n;
	string line;
	
	cin >> n;
	cin.ignore();
	while (n--) {
		getline(cin, line);
		for (int i=line.size() / 2 - 1; i >= 0; i--) {
			cout << line[i];
		}
		for (int i=line.size() - 1,stop = line.size() / 2; i >= stop; i--) {
			cout << line[i];
		}
		cout << endl;



	}


	return 0;
}