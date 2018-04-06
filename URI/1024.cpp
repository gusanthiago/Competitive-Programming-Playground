#include <bits/stdc++.h>

using namespace std;

string criptografia(string m) {
    
    for (int i=0; i < m.size(); i++)
        if ((m[i] >= 'a' && m[i] <= 'z' )|| (m[i] >= 'A' && m[i] <= 'Z' ))
            m[i] = m[i] + 3;
    
    for (int i=0, tot = m.size()/2; i < tot; i++) {
        char aux = m[i];
        int si = m.size() - (1 + i);
        m[i] = m[si];
        m[si] = aux;
    }
    
    for (int i=m.size() / 2; i < m.size(); i++)
        m[i] = m[i] - 1;
        
    return m;
    
}

int main () {
    
    int n;
    string m;
    
    
    cin >> n;
    getchar();
    while (n--) {
        
        getline(cin, m);
        // cout << m << endl;
        
        cout << criptografia(m) << endl;
        
        
    }
    
    
    return 0;
}