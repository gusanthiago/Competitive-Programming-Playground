#include <bits/stdc++.h>

using namespace std;


int main() {
    
    int bancos[32];
    
    int b,d;
    
    while (cin >> b >> d && b + d != 0) {
        
        memset(bancos, 0, sizeof 0);
        
        int bd;
        for (int i = 1; i <= b; i++) {
            cin >> bancos[i];
        }
        
        int credor, debenture, flag = 1;
        
        for (int i = 0; i < d; i++) {
            
            cin >> bd >> credor >> debenture;
            bancos[bd] -= debenture;
            bancos[credor] += debenture;
        }
        
        for (int i = 1; i <= b; i++) {
            
            if (bancos[i] < 0)
                flag = 0;
            
            
        }
        
        if (flag) 
            cout << "S" << endl;
        else 
            cout << "N" << endl;
        
    }
    
    
    
    
    return 0;
}