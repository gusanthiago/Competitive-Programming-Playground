#include <bits/stdc++.h>

using namespace std;

int main() {

	string sd[] = {
		"PROXYCITY",
		"P.Y.N.G.",
		"DNSUEY!",
		"SERVERS",
		"HOST!",
		"CRIPTONIZE",
		"OFFLINE DAY",
		"SALT",
		"ANSWER!",
		"RAR?",
		"WIFI ANTENNAS"
	};

	int n, s1,s2;

	cin >> n;

	while (n--) {
		cin >> s1 >> s2;
		cout << sd[s1+s2] << endl;

	}




	return 0;
}