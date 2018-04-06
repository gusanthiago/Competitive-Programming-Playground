#include <stdio.h>


int main(){
    
    int l,c,coluna=0;
    float total=0,le;
    char op;
    
    scanf("%d",&coluna);
    scanf(" %c",&op);
    
    for(l=0;l<12;l++){
        for(c=0;c<12;c++){
            
            scanf("%f",&le);
            
            if(c == coluna){
                total+=le;
            }
            
            
        }
    }
    
    if(op == 'M'){
        total /= 12;
    }
    printf("%.1f\n",total);
    
    
    
    
}