#include <bits/stdc++.h>

using namespace std;

int const maxn = 110;
int const maxd = 510;

int mtx[maxd][maxn];
bool visited[maxd];

int main() {

	int n,d;

	while (cin >> n >> d) {
		if (n + d == 0) break;

		memset(visited, 1, sizeof visited);
		for (int i=0; i < d; i++) {
			for (int j=0; j < n; j++) {
				cin >> mtx[i][j];
				if (! mtx[i][j]) {
					visited[j] = false;
				}
			}
		}

		bool flag = false;
		for (int i=0; i < n; i++) {
			// cout << flag << endl;
			if (visited[i]) {
				flag = true;
			}
		}
		cout << (flag ? "yes" : "no") << endl;



	}

	return 0;
}