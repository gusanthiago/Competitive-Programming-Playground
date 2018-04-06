#include <bits/stdc++.h>

using namespace std;

typedef long long huge;

int main () {

	int n;
	string clean1, clean2, nome1, nome2,impar, par;
    huge n1,n2;
    
    cin >> n;
    
    while (n--) {
    
        cin >> nome1 >> clean1 >> nome2 >> clean2;
        cin >> n1 >> n2;
        
        par = nome2;
        impar = nome1;
        
        if (clean1 == "PAR") {
            par = nome1;
            impar = nome2;
        }

        cout << ((n1 + n2) % 2 == 0 ? par : impar) << endl; 
    
    }

	


	return 0;
}