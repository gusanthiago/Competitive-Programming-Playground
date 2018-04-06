#include <bits/stdc++.h>

using namespace std;

int main () {

	int s,t,f, result;

	cin >> s >> t >> f;

	result = s + t + f;
	if (result > 23) {
		result = result - 24;
	} else if (result < 0) {
		result = result + 24;
	}


	cout <<  result << endl;


	return 0;
}