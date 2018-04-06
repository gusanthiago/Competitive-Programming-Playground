#include <bits/stdc++.h>

using namespace std;

bool isRepeatNumber(int n) {
	bool visited[10];
	int modV = 0;
	memset(visited, 0, sizeof visited);

	while(n >= 10) {
		modV = n % 10;
		if (visited[modV])  {
			return true;
		}
		// cout << modV << endl;
		visited[modV] = true;
		n /= 10;
	}

	// cout << " não passa" << endl;
	if (visited[n]) return true;

	return false;

}

int countDiffentsNumberHouse(int n,int m) {

	int count = 0;
	while (n <= m) {
		// cout << n << endl;
		if (! isRepeatNumber(n)) {
			count++;
		}
		n++;
	}
	return count;

} 

int main() {

	int n,m;

	while (cin >> n >> m) {
	
		cout << countDiffentsNumberHouse(n,m) << endl;;

	}



	return 0;
}