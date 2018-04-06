#include <stdio.h>

int main(){
    
    int vet[20],i;
    for(i=0;i<20;++i){
        
        scanf("%d",&vet[i]);
        
    }
    
    int a=0,b=19,aux;
    for(i=0;i<10;++i){
       
       aux = vet[b];
       vet[b] = vet[a];
       vet[a] = aux;
       
       a++;b--;
    }
    
    for(i=0;i<20;++i){
        printf("N[%d] = %d\n",i,vet[i]);
        
    }
    
    
    
}