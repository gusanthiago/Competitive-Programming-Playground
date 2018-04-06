#include <bits/stdc++.h>

using namespace std;

int main() {
    
    string tst;
    int soma = 0, flag = 1;
    while(getline(cin, tst)) {
        // cout << tst;
        flag = 1;
        // cout << string("*..").find(tst) != 0 << "ts" << endl;
        if (tst[0] == '*') {
            soma+=4;
            flag = 0;
        }
        if (tst[1] == '*') {
            soma+=2;
            flag = 0;
        }
        if (tst[2] == '*')  {
            soma+=1;
            flag = 0;
        }
        
        if(flag) {
            cout << soma << endl;
            soma = 0;
        }
            
        
    }
    
    
    
    return 0;
}