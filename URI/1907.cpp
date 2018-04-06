#include <bits/stdc++.h>


using namespace std;

const int maxn = 1026;

int contRegion = 0;
int n,m, indexMax;
char graph[maxn][maxn];
int visited[maxn][maxn];
bool flag = 0;

void bfs(int i, int j) {

	queue< pair<int ,int> > q;
	q.push(make_pair(i,j));
	graph[i][j] = 'o';
	int iN,jN;
	while (! q.empty()) {
		iN = q.front().first;
		jN = q.front().second;
		q.pop();

		
		int I[] = {iN + 1, iN, iN - 1, iN};
		int J[] = {jN, jN + 1, jN, jN-1};

		for (int z = 0; z < 4; z++) {
			if (graph[I[z]][J[z]] == '.') {
				graph[I[z]][J[z]] = 'o';
				q.push(make_pair(I[z], J[z]));
			}
		}


	}


}

void bfsRunner() {

	for (int i=1; i <= n; i++) {
		for (int j=1; j <= m; j++) {
			if (graph[i][j] == '.') {
				bfs(i,j);
				contRegion++;
			} 
		}
	}

}

int main () {

	char c;

	scanf ("%d %d", &n, &m);
	n++;m++;
	for (int i=0; i <= n; i++) {
		for (int j=0; j <= m; j++) {
			graph[i][j] = 0;
		}
	}
	n--;m--;

	for (int i=1; i <= n; i++) {
		for (int j=1; j <= m; j++) {
			scanf(" %c", &graph[i][j]);
		}
	}

	bfsRunner();


	cout << contRegion<< endl;



	return 0;
}