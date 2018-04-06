#include <stdio.h>

int main(){
    
    double n1;
    int i=0;
    scanf("%lf",&n1);
    
    printf("N[%d] = %.4f\n",i,n1);
    
    for(i=1;i<100;++i){
        n1 = n1/2;
        printf("N[%d] = %.4f\n",i,n1);
        
    }
    
    
    return 0;
}