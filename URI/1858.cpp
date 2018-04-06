#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int n, tmp, menorI, menorN;
    
    cin >> n;
    
    cin >> tmp;
    menorI = 1;
    menorN = tmp;
    
    for (int i=2;i <= n; i++) {  
        cin >> tmp;
        
        if (tmp < menorN) {
            menorN = tmp;
            menorI = i;
        }
        
        
        
    }
    
    cout << menorI << endl;
    
    return 0;
}