#include <stdio.h>

int main(){
    
    int num,i=0;
    
    scanf("%d",&num);
    while(i<10){
        printf("N[%d] = %d\n",i,num);
        num = num*2;
        i++;
    }
    
    
}