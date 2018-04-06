#include <bits/stdc++.h>

using namespace std;

const int maxn = 28;
int graph[maxn][maxn];
bool visited[maxn];
int n, v, e, v1, v2, cont,caseI, curr;


void dfs(int start, int dp) {
	visited[start] = true;
	for (int i = 0; i < v; i++) {
		if (graph[start][i]) {
			if (visited[i]) {
				cout << string (dp, ' ');	
				printf("%d-%d\n", start, i);
			} else {
				if (curr != start && dp == 2) {
					curr = start;
					printf("\n");
				}	
				cout << string (dp, ' ');	
				printf("%d-%d pathR(G,%d)\n", start, i, i);
				dfs(i, dp + 2);

			}
		} 
	}
}


int main() {


	cin >> n;
	while (n--) {
		
		cin >> v >> e;

		memset(graph, 0, sizeof graph);
		cont = 0;
		curr = 0;
		memset(visited, 0, sizeof visited);

		for (int i=0; i < e; i++) { 
			cin >> v1 >> v2;
			graph[v1][v2] = 1;
		}

		printf("Caso %d:\n", ++caseI);
		for (int i=0; i < v; i++) {
			if (!visited[i]) dfs(i, 2);
		}
		printf("\n");
	}



	return 0;
}