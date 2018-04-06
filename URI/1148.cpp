#include <bits/stdc++.h>
#define INF 500010
#define MAX 515
using namespace std;

int grafo [515][515];
int visitados[515];
int distancia[515];
int n,e;
int x,y,h;
    
void dijkstra(int inicio,int fim){
    distancia[inicio] = 0;
    int menor_dist, index;
    
    for (int i = 0; i < n-1; i++) {
        menor_dist = INF;
        
        for(int j=1;j<=n;++j){
            
            if(distancia[j] < menor_dist && !visitados[j]) {
                menor_dist = distancia[j];
                index = j;
            }
        }
        
        if (menor_dist == INF) return;
        
        if (index == fim) return;
        
        visitados[index] = 1;
        
        for (int j = 1; j <= n; ++j) {
            if (!visitados[j] &&
            grafo[index][j] != INF &&
            distancia[index] + grafo[index][j] < distancia[j]) {
                distancia[j] = distancia[index] + grafo[index][j];
            }
        }
        
    }
}

int main(){

    
    while(scanf("%d %d",&n,&e) && (n || e)){
        for(int i=0;i<=n;i++){
            for(int j=0;j<=n;j++){
                grafo[i][j]=INF;
            }
        }        
        while(e--){
            scanf("%d %d %d",&x,&y,&h);
            if(grafo[y][x] != INF){
                grafo[y][x] = 0;
                grafo[x][y] = 0;
            }else{
                grafo[x][y] = h;
            }
            
        }
        scanf("%d",&h);
        while(h--){
            
            for (int i = 0; i <= n; ++i) {
                distancia[i] = INF;
                visitados[i] = 0;
            }
            
            scanf("%d %d",&x,&y);
            if(grafo[x][y] == 0){
                printf("0\n");
                continue;
            }
            dijkstra(x,y);
            
            int d = distancia[y];
            
            if (d == INF) printf("Nao e possivel entregar a carta\n");
            else printf("%d\n", d);
        }
        
        printf("\n");
    }
    
    return 0;
}