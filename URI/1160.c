#include <stdio.h>

int main(){
    
    int t;
    scanf("%d",&t);
    while(t--){
        
        int pa=0,pb=0,conta=0;
        float g1=0,g2=0;
        scanf("%d %d %f %f",&pa,&pb,&g1,&g2);
        
        while(pa <= pb){
            conta++;
            pa = pa +( pa * (g1/100.0));
            pb = pb +( pb * (g2/100.0)); 
            // printf("%f ")
            
            if(conta>100){
                printf("Mais de 1 seculo.\n");
                break;
            }
        }
        
        if(conta<=100){
            printf("%d anos.\n",conta);
        }
        
    }
    
    return 0;
}