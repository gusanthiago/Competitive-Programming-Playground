#include <bits/stdc++.h>

using namespace std;

int main() {

	set<string> mapa;
	string line;
	int count = 0;

	while (getline(cin, line)) {
		mapa.insert(line);
	}

	for (set<string>::iterator it = mapa.begin(); it != mapa.end(); it++)  {
		count++;
	}

	cout << count << endl;


	return 0;
}