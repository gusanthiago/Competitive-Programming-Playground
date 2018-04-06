#include <stdio.h>

int main(){
    
    int l,c,controla=0,conta=0;
    float total=0,le;
    char op;
    
    scanf(" %c",&op);
    
    for(l=0;l<12;l++){
        for(c=0;c<12;c++){
            scanf("%f",&le);
            
            if(c > controla){
                total+=le;
                conta++;
                
            }
            
            
        }
        
        controla++;
        
    }

    
    if(op == 'M'){
        total /= conta;
    }
    
    printf("%.1f\n",total);
    
    return 0;
}