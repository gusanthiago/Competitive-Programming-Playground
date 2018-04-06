#include <bits/stdc++.h>

using namespace std;

/* Returns length of LCS for X[0..m-1], Y[0..n-1] */
int lcs(string X,string Y, int m, int n )
{
  int L[m+1][n+1];
	int i, j, result = 0;
	 /* Following steps build L[m+1][n+1] in bottom up fashion. Note 
	    that L[i][j] contains length of LCS of X[0..i-1] and Y[0..j-1] */
 	
 	for (int i=0; i <= m; i++) {
 		for (int j=0; j <= n; j++) {

 			if (i == 0 || j == 0) {
 				continue;
 			} else if (X[i - 1] == Y[j - 1]) {
 				L[i][j] = L[i - 1][j - 1] + 1;
 				result = max(L[i][j], result);
 			} else {
 				continue;
 			}

 		}
 	}
    
   /* L[m][n] contains length of LCS for X[0..n-1] and Y[0..m-1] */
   return result;
}


int main() {

	string x,y;

	while (getline(cin, x)) {
		getline(cin, y);
		cout << x << endl;
		cout << y << endl;
		cout << lcs(x, y, x.size(), y.size()) << endl;

	}

	return 0;
}