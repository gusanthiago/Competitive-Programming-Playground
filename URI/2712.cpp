#include <bits/stdc++.h>

using namespace std;

bool isValidBoard(string board) {

	if (board.size() != 8) {
		return false;
	}

	if (board[3] != '-') {
		return false;
	}

	for (int i=0; i < 8; i++) {

		if (i < 3 && (! isalpha(board[i]) || ! isupper(board[i])) ) {
			return false;
		}
		if (i > 3 && (! isdigit(board[i]))) {
			return false;
		}

	}
	
	return true;

}

string extractResult(string board) {

	if (! isValidBoard(board)) {
		return string("FAILURE");
	}

	if (board[7] == '1' || board[7] == '2') {
		return string("MONDAY");
	}
	if (board[7] == '3' || board[7] == '4') {
		return string("TUESDAY");
	}
	if (board[7] == '5' || board[7] == '6') {
		return string("WEDNESDAY");
	}
	if (board[7] == '7' || board[7] == '8') {
		return string("THURSDAY");
	}
	if (board[7] == '9' || board[7] == '0') {
		return string("FRIDAY");
	}
	return string("FAILURE");
}


int main() {

	int n;
	string line;

	cin >> n;
	cin.ignore();

	while (n--) {
		getline(cin, line);
		cout << extractResult(line) << endl;
	}



	return 0;
}