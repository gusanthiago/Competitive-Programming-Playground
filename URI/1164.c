#include <stdio.h>

int ehPerfeito(int x){
    
    int soma=0,i;
    
    if(x == 1){
        return 0;
    }else{
        for(i=1;i<x;++i){
            soma+=i;
            
            if(soma == x){
                return 1;
            }
        }
        
        return 0;
    
        
    }
}

int main(){
    
    int n,x;
    
    scanf("%d",&n);
    
    while(n--){
        
        scanf("%d",&x);
        if(ehPerfeito(x)){
            printf("%d eh perfeito\n",x);
        }else{
            printf("%d nao eh perfeito\n",x);
            
        }
        
    }
    
    
    return 0;
}