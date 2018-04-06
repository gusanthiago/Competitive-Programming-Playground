#include <stdio.h>

int main(){
    
    int l,c,conta=0,controla=11;
    float total=0,le;
    char op;
    
    scanf(" %c",&op);
    
    for(l=0;l<12;l++){
        for(c=0;c<12;c++){
            
            scanf("%f",&le);
            
            if(controla > c){
                total+=le;
                conta++;
            }
            
        }
        controla--;
        
    }
    
    if(op == 'M'){
        total /= conta;
        
    }
    
    printf("%.1f\n",total);
    
    return 0;
    
}