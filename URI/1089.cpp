#include <bits/stdc++.h>

using namespace std;


int n=0,h=0;

int contaPicos(int notas[]){
    
    if(n == 2){
        if(notas[0] != notas[1]){
            return 2;
        }else{
            return 0;
        }
        
    }else{
        
        int conta=0,a=0,b=0,c=0;
        
        for(int i=0;i<n;++i){
            
            if(i == 0){
                a = notas[n-2];
                b = notas[n-1];
                c = notas[0];
                
            }else if(i == 1){
                a = notas[n-1];
                b = notas[0];
                c = notas[1];
                
            }else{
                a = notas[i-2];
                b = notas[i-1];
                c = notas[i];
            }
            if((b > a && c < b) || (b < a && c > b)){
                conta++;
            }          
            
        }
        
        return conta;
    }
    
    

}

int main(){

    
    while(cin >> n && n != 0){
        
        int notas[n];
        
        for(int i=0;i<n;++i){
            
            cin >> h;
            notas[i] = h;    
            // printf("%d",notas[i]);
        }
        printf("%d\n",contaPicos(notas));
        
    }
    
    return 0;
}