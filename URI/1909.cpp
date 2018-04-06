#include <bits/stdc++.h>

using namespace std;

vector<int> bolas;

int gcd(int a, int b) {
    
    int r = a % b;
    while (r != 0) {
        
        a = b;
        b = r;
        r = a % b;
    }
    
    return b;
}

int lcm (int a, int b) {
    return a * (b / gcd(a, b));
}

int quicaAe(int mmc, int nMax) {
    
    if (nMax % mmc != 0)
        return 0;
    
    for (int i=2; i <= nMax; i++)
        if (nMax % i == 0) 
            if (lcm(mmc, i) % nMax == 0 && ! (find(bolas.begin(), bolas.end(), i) != bolas.end() ) )
                return i;
    
    return 0;
}

int main () {
    
    int n, t, tmp;
    int mmcTmp;
    
    cin >> n >> t;
    while (n + t != 0) {
        
        cin >> tmp;
        mmcTmp = tmp;
        bolas.push_back(tmp);
        for (int i = 1; i < n; i++) {
            cin >> tmp;
            mmcTmp =  lcm(tmp, mmcTmp);
            bolas.push_back(tmp);
        }
        
        int nova = quicaAe(mmcTmp, t);
        if (nova) {
            cout << nova  << endl;
        } else {
            cout << "impossivel" << endl;
        }
        bolas.clear();
        cin >> n >> t;
    }
    
    return 0;
}
