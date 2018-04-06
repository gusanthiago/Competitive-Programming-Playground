#include <stdio.h>
#include <string.h>

int main(){
    
    int l,c,linhaO=0;
    float total=0,le=0;
    char op;
    
    scanf("%d",&linhaO);
    scanf(" %c",&op);
   
    for(l=0;l<12;l++){
        for(c=0;c<12;c++){
            scanf("%f",&le);
            
            if(linhaO == l){
                total += le;
                
            }    
        
        }
        
    }

    if(op == 'M'){
        total = total/12.0;
    }
    
    printf("%.1f\n",total);
    
    
    
    return 0;
}