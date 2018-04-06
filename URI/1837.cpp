#include <bits/stdc++.h>

using namespace std;


int main (){ 
    
    int a,b;
    
    cin >> a >> b;
    
    /*
    r = (short) ((a % Math.abs(b) + Math.abs(b)) % Math.abs(b));
	q = (short) ((a - r) / b);
    */
    
    
    int r = (a % abs(b) + abs(b)) % abs(b);
    int q = (a - r) / b;
        

    cout << q << " " << r << endl;
    
    
    return 0;
}
    
    