#include <bits/stdc++.h>

using namespace std;


int main () {
    
    
    int vet[16], n;
    
    vet[0] = 6;
    vet[1] = 2;
    vet[2] = 5;
    vet[3] = 5;
    vet[4] = 4;
    vet[5] = 5;
    vet[6] = 6;
    vet[7] = 3;
    vet[8] = 7;
    vet[9] = 6;
    
    string nova;
    
    cin >> n;
    
    getchar();
    while (n--) {
        getline(cin, nova);
        int tot = 0;
        for (int i=0; i < nova.size(); i++) 
            tot += vet[nova[i] - '0'];
        cout << tot << " leds" << endl;
        
    }
        
    
    
    
    return 0;
}