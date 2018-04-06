#include <bits/stdc++.h>

using namespace std;

int main() {
    
    string a,b;
    int n;
    
    cin >> n;
    // cout << n << endl;
    int lista = 0;
    
    
    while (n--) {
        lista ++;
//     a tesoura corta o papel;
// o papel embrulha a pedra;
// a pedra esmaga o lagarto;
// o lagarto envenena Spock;
// Spock destrói a tesoura;
// a tesoura decapita o lagarto;
// o lagarto come o papel;
// o papel contesta Spock;
// Spock vaporiza a pedra;
// a pedra quebra a tesoura.
    
        cin >> a >> b;
        
        cout << "Caso #" << lista;
        
        
        if (a == b) {
            cout << ": De novo!" << endl;
            
        } else if ( ( a == "tesoura"  && (b == "papel" || b == "lagarto" ) ) || 
                    ( a == "papel"  &&   (b == "pedra" || b == "Spock"   ) ) ||
                    ( a == "pedra"  &&   (b == "lagarto" || b == "tesoura"   ) ) ||
                    ( a == "lagarto"  &&   (b == "Spock" || b == "papel"   ) ) ||
                    ( a == "Spock"  &&   (b == "tesoura" || b == "pedra"   ) )) {

            cout << ": Bazinga!" << endl;
        } else {
            cout << ": Raj trapaceou!" << endl;
        }
         


    
    }
    
    

    return 0;
}