#include <stdio.h>

int main(){
    
    int l,c,conta=0,controle=11;
    double total=0,le;
    char op;
    
    scanf(" %c",&op);
    
    for(l=0;l<12;l++){
        for(c=0;c<12;c++){
            
            scanf("%lf",&le);
            
            if(c > controle && c > 11-controle && c > 6){
                total+=le;
                conta++;
            }            

        }
        controle--;
    }
    
    if(op == 'M'){
        total /= conta;
        
    }
    
    printf("%.1lf\n",total);
    
    return 0;
}