#include <stdio.h>

int main(){
    
    long long unsigned n,maior=0,num;
    
    long long unsigned vet[61];
    long long unsigned fib = 1,passa=1,i;
    
    vet[0] = 0;
    vet[1] = 1;
    for(i=2;i<=60;++i){
        
        long long unsigned soma = fib + passa;
        fib = passa;
        passa = soma;
        vet[i] = fib;
    
    }
        
   
    
    scanf("%lld",&n);

    while(n--){
        
        scanf("%lld",&num);
        printf("Fib(%lld) = %lld\n",num,vet[num]);
    }
    
    
    
    return 0;
}