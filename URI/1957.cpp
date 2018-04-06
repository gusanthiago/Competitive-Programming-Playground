#include <bits/stdc++.h>

using namespace std;

int main () {

	long long int value;
	stringstream ss;

	cin >> value;
	ss << hex << value;
	string res (ss.str());
	for (int i=0; i < res.size(); i++)
		printf("%c", toupper(res[i]));
	printf("\n");

	return 0;
}