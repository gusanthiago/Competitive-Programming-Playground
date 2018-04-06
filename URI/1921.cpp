#include <bits/stdc++.h>

using namespace std;

typedef long long huge;

int main () {
    
    huge n, sum=0;
    
    cin >> n;
    
    int lim = n - 2;
    
    for (int i=2; i <= lim; i++) 
        sum += i;
        
    cout << sum << endl;
    
    
    
    
    
    return 0;
}