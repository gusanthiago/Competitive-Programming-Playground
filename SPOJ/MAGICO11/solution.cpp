#include <bits/stdc++.h>

using namespace std;

const int maxn = 1010;

long int square[maxn][maxn];
int n;
unordered_set<long int> numbers;


long int diagonal() 
{
	long int resultDiagonalOne = 0, resultDiagonalTwo = 0;
	for (int i=0, d=0; i < n; i++,d++) {
		resultDiagonalOne += square[i][d];
	}
	for (int i=n-1, d=n-1; i >= 0; i--,d--) {
		resultDiagonalTwo += square[i][d];
	}
	
	return resultDiagonalOne == resultDiagonalTwo ? resultDiagonalOne : 0;
}

long int sides()
{
	long int previousResult = -1, currentResultHorizontal = 0, currentResultVertical = 0;
	
	
	for (int i=0; i < n; i++) {
		currentResultHorizontal = 0;
		currentResultVertical = 0;
		for (int j=0; j < n; j++) {
			if (numbers.insert(square[i][j]).second == false) {
				return 0;
			} 
			currentResultHorizontal += square[i][j];
			currentResultVertical += square[j][i];
		}
		if (previousResult == -1) {
			previousResult = currentResultHorizontal;
		}
		if (currentResultHorizontal != currentResultVertical) {
			return 0;
		}
		if (previousResult != currentResultVertical || previousResult != currentResultHorizontal) {
			return 0;
		}
	}

	return previousResult;
}

long int solve()
{
	long int diagonalResult = diagonal();
	if (! diagonalResult) {
		return 0;
	}
	long int sidesResults = sides();
	if (! sidesResults) {
		return 0;
	}
	// cout << "passou 2" << endl;

	// cout << sidesResults <<  " " << diagonalResult << endl;
	if (sidesResults != diagonalResult) {
		sidesResults = 0;
	}
	return sidesResults;
}


int main() {

	
	cin >> n;

	for (int i=0; i < n; i++) {
		for (int j=0; j < n; j++) {
			cin >> square[i][j]; 
		}
	}

	cout << solve() << endl;

	return 0;
}