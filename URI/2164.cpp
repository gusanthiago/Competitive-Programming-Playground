#include <bits/stdc++.h>

using namespace std;


int main() {
    
    
    int n;
    cin >> n;
    
    double raiz5 = sqrt(5);
    double result =   ( pow( (( 1 + raiz5 ) / 2), n) - pow ( (( 1 -  raiz5 ) / 2) , n) )  / raiz5;
    
    // cout << result << endl;
    printf("%.1f\n", result);
    
    
    return 0;
}