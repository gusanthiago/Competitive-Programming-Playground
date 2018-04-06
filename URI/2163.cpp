#include <bits/stdc++.h>

using namespace std;

const int maxn = 1024;
int graph[maxn][maxn];
int xRes = 0, yRes = 0;
vector<int> x,y;

void bfs() {

	queue<pair<int, int> > q;
	
	for (int i=0; i < x.size(); i ++)
		q.push(make_pair(x[i], y[i]));

	while (! q.empty()) {

		pair<int, int> curr = q.front();q.pop();
		int II[] = {-1, -1, 0, 1, 1,  1,  0, -1};
		int JJ[] = { 0,  1, 1, 1, 0, -1, -1, -1};
		bool localFlag = true;

		for (int i=0; i < 8; i++) {
			int nI = curr.first + II[i];
			int nJ = curr.second + JJ[i];
			if (graph[nI][nJ] != 7) {
				localFlag = false;
			}
		}

		if (localFlag) {
			xRes = curr.first;
			yRes = curr.second;
			break;
		}
	}

	

}


int main () {

	int n,m;

	cin >> n >> m;
	
	memset(graph, 0, sizeof graph);
	for (int i=1; i <= n; i++) {
		for (int j=1; j <= m; j++) {
			cin >> graph[i][j];
			if (graph[i][j] == 42) {
				x.push_back(i);
				y.push_back(j);
			}
		}
	}

	bfs();

	cout << xRes << " " << yRes << endl;




	return 0;
}