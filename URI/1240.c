#include <stdio.h>
#include <string.h>

int main() {
    
    int n;
    scanf("%d",&n);
    while(n--) {
        int a,b;
        scanf("%d %d",&a,&b);
        
        int flag=10;
        
        if(a == b) {
            printf("encaixa\n");
        }else{
                
            while(flag < b) {
                flag *= 10;
            }
            
            if(a%flag == b) {
                printf("encaixa\n");
            }else{
                printf("nao encaixa\n");
            }
        }
            
        
        
        
        
    }
    
    return 0;   
}