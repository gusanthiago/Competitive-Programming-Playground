#include <stdio.h>

int ehPrimo(int x){
    
    if(x == 1){
        return 0;
    
        
    }else if(x == 2){
        return 1;
        
    }else{
        
        int i;
        for( i=2; i < x ; i+=1 ){
            
            if(x % i == 0){
                return 0;
                
            }
            
            
        }
        return 1;
        
    }
    
    
    
}

int main(){
    
    int n,x=0;
    scanf("%d",&n);
    
    while(n--){
        
        scanf("%d",&x);
        if(ehPrimo(x)){
            printf("%d eh primo\n",x);
            
        }else{
            printf("%d nao eh primo\n",x);
            
        }
        
    }
    
    
    return 0;
}