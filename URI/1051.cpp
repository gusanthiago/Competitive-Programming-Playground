#include <bits/stdc++.h>

using namespace std;


int main () {
    
    float p;
    
    cin >> p;
    
    if (p <= 2000) {
        cout << "Isento" << endl;
    } else {
        
        float m1,m2,m3;
        
        if (p <= 3000) {
            m1 = p - 2000;
            printf("R$ %.2f\n", (m1 * 0.08) );
            
        } else if (p <= 4500) {
            m2 = p - 3000;
            m1 = 1000 * 0.08;
            
            printf("R$ %.2f\n", (m1 + m2 * 0.18) );
            
        } else {
            m3 = p - 4500;
            m2 = 1000 * 0.08 + 1500 * 0.18;
            
            printf("R$ %.2f\n", (m2 + m3 * 0.28) );
            
        }
        
    }
    
    
    
    
    return 0;
}