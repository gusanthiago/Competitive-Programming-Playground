#include <bits/stdc++.h>

using namespace std;

#define maxn 1010000

int vet[maxn];


int f91(int n) {
    
    if (n > 100)
        vet[n] = n - 10;
        return vet[n];
    // if (vet[n]) 
    //     return vet[n];
    int tmp = f91 (f91 (n + 11));
    vet[n] = tmp;
    return tmp;
}

int main () {
    
    int n;
    memset(vet, 0, sizeof vet);
    while(scanf("%d", &n) != EOF) {
        cout << f91(n) << endl;
    }
    
    return 0;
}