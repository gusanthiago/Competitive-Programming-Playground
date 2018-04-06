#include <bits/stdc++.h>

using namespace std;

#define maxn 11000
int contOp (string a, string b) {
    int cont = 0;

    for (int i = 0; i < a.size();i++)
        if (a[i] != b[i])
            cont += b[i] > a[i] ? b[i] - a[i] : 26 - (a[i] - b[i]);
            
    return cont;
}


int main () {

    string a,b;
    int n;
    cin >> n;

    while (n--) {
        cin >> a >> b;
        cout << contOp(a, b) << endl;
    }




    return 0;
}
