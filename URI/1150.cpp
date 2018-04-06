#include <bits/stdc++.h>

using namespace std;

typedef long long int huge;

int main () {
    
    huge x,z,tmp,tot,count = 1;
    
    
    cin >> x;
    
    while (cin >> tmp) {
        
        if (tmp > x) {
            z = tmp;
            break;
        }
    }
    
    tot = x;
    while (tot <= z) {
        tot += ++x;
        count++;
    }
    
    cout << count << endl;
    
    return 0;
}