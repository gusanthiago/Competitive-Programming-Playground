#include <bits/stdc++.h>

using namespace std;

int main() {
    
    
    int k,pontoLesteO,pontoNorteS;
    
    
    cin >> k;
    while(k!=0) {
        cin >> pontoLesteO >> pontoNorteS;
    
        while(k--) {
            
            int lesteO,norteS;
            cin >> lesteO >> norteS;
            
            if(lesteO == pontoLesteO || pontoNorteS == norteS) {
                cout << "divisa" << endl;
            } else {
                 
                if(lesteO > pontoLesteO && norteS > pontoNorteS) {
                    cout << "NE";
                } else if (lesteO < pontoLesteO && norteS < pontoNorteS) {
                    cout << "SO";
                } else if (lesteO < pontoLesteO && norteS > pontoNorteS) {
                    cout << "NO";
                } else if (lesteO > pontoLesteO && norteS < pontoNorteS) {
                    cout << "SE";
                }
                cout << endl;              
            }
            
            
            
        }
        cin >> k;
    }
    
    
    return 0;
}