#include <bits/stdc++.h>

using namespace std;

bool solve(string line, int n) {

	int count = 0;

	for (int i=0; i < n; i++) {
		if (line[i] == ')') count--;
		else if(line[i] == '(') count++;
		
		if (count < 0) return false;
	}

	return count == 0 ? true : false;
}


int main () {

	string line, count;

	while (getline(cin, line)) {
		cout << (solve(line, line.size()) ? "correct" : "incorrect") << endl; 
	}	



	return 0;
}