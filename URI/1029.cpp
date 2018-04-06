#include <bits/stdc++.h>

using namespace std;


int counter = 0;

int fib (int n) {
    
    if (n == 0) {
        counter++;
        return 0;
    } else  if (n == 1) {
        counter+=1;
        return 1;
    } else {
        
        counter++;
        return fib(n-1) + fib(n-2);
    }
}

int main () {
    
    int n;
    int t;
    
    cin >> n;
    
    
    while (n--) {
        
        counter = 0;
        
        cin >> t;
        int result = fib(t);
        
        cout << "fib(" << t << ")" << " = " << counter - 1 << " calls = " << result << endl;
        
    }
    
    return 0;
}