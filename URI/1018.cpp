#include <bits/stdc++.h>


using namespace std;
int main() {
    
    int valor;
    
    scanf("%d\n", &valor);
    // 100, 50, 20, 10, 5, 2 e 1
    // 
    int nota[110];
    memset(nota, 0, sizeof nota);
    cout << valor << endl;
    while (valor != 0) {
        
        
        if (valor >= 100) {
            nota[100]++;
            valor -= 100;
        } 
        else if (valor >= 50) {
            nota[50]++;
            valor -= 50;
            
        }
        else if (valor >= 20) {
            nota[20]++;
            
            valor -= 20;
            
        } 
        else if (valor >= 10) {
            nota[10]++;
            
            valor -= 10;
            
        } 
        else if (valor >= 5) {
            nota[5]++;
            valor -= 5;
            
        } 
        else if (valor >= 2) {
            nota[2]++;
            valor -= 2;
            
        } 
        else if (valor >= 1) {
            nota[1]++;
            valor -= 1;

        }
    
    }
    
    
    cout << nota[100] << " nota(s) de R$ 100,00" << endl;
    cout << nota[50] << " nota(s) de R$ 50,00" << endl;
    cout << nota[20] << " nota(s) de R$ 20,00" << endl;
    cout << nota[10] << " nota(s) de R$ 10,00" << endl;
    cout << nota[5] << " nota(s) de R$ 5,00" << endl;
    cout << nota[2] << " nota(s) de R$ 2,00" << endl;
    cout << nota[1] << " nota(s) de R$ 1,00" << endl;
    
    

    
    
    return 0;
}