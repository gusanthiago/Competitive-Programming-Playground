#include <bits/stdc++.h>

using namespace std;

const int maxn = 28;
const int maxm = 28;

int graph[maxn][maxn];
bool visited[maxn];
int n,v,e, tmpI,tmpJ,caseI;
char v1,v2;
int sol[maxm];

void dfs(int start) {
	
	sol[start] = 1;
	for (int i=0; i < v; i++) {
		if (graph[start][i] && ! visited[i]) {
			visited[i] = true;
			dfs(i);
		}
	}
}

void dfsRunner() {
	int comp = 0;

	for (int i=0; i < v; i++) {
		if (! visited[i])  {
			memset(sol, 0, sizeof sol);
			dfs(i);
			comp++;
			for (int i=0; i < maxm; i++) {
				if (sol[i]) printf("%c,", (char) (i + 'a'));
			}
			printf("\n");
		}
	}
	printf("%d connected components\n", comp);

}

int main () {

	caseI = 0;
	scanf("%d", &n);

	while (n--) {

		memset(graph, 0, sizeof graph);
		memset(visited, 0, sizeof visited);
		
		scanf(" %d %d", &v, &e);
		
		for (int i=0; i < e; i++) {
			scanf(" %c %c", &v1, &v2);
			tmpI = v1 - 'a';
			tmpJ = v2 - 'a';
			graph[tmpI][tmpJ] = 1;
			graph[tmpJ][tmpI] = 1;
		}


		// cout << "debug" << endl;
		// for (int i = 0; i < v; i++) {
		// 	for (int j=0; j < v; j++) {
		// 		if (graph[i][j]) {

		// 			cout << (char) (i + 'a')  << "  < - > " << (char) (j + 'a') << endl;
		// 		}
		// 	}	
		// }

		printf("Case #%d:\n", ++caseI);
		dfsRunner();
		printf("\n");

	}





	return 0;
}