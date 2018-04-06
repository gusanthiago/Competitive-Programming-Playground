#include <bits/stdc++.h>

using namespace std;

int const MAXN = 10010;
int const WHITE = 0;
int const BLACK = 1;
int const GRAY = 2;

vector<int> graph[MAXN];
int t, n, m, go, to;
int visited[MAXN];

void clearGraph() {
	for (int i=0; i <= n; i++) {
		graph[i].clear();
	}
}

void clearVisited() {
	for (int i=0; i <= n; i++) {
		visited[i] = WHITE;
	}
}

bool dfs(int start) {

	int sizeV = graph[start].size();
	for (int i=0; i < sizeV; i++) {
		if (visited[graph[start][i]] == GRAY) {
			continue;
		}
		if (visited[graph[start][i]] == BLACK) {
			return true;
		}
		visited[graph[start][i]] = BLACK;
		if (dfs(graph[start][i])) {
			return true;
		}
	}
	visited[start] = GRAY;
	return false;
}

bool haveCycle () {
	for (int i=0; i < n; i++) {
		if (! visited[i] && dfs(i)) {
			return true;
		}
	}
	return false;
}

int main() {

	scanf("%d", &t);
	while (t--) {

		scanf("%d %d", &n, &m);
		clearGraph();
		clearVisited();

		for (int i=0; i < m; i++) {
			scanf("%d %d", &go, &to);
			graph[go - 1].push_back(to - 1);
		}
		printf("%s\n", haveCycle() ? "SIM" : "NAO");

	}


	return 0;
}