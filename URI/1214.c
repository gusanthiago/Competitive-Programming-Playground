#include <stdio.h>

int main(){
    
    int c;
    scanf("%d",&c);
    while(c--){
        int n=0,i=0,nota=0,acima=0;
        float media=0;
        scanf("%d",&n);
        
        float totalNot[n];
        for(i=0;i<n;++i){
            scanf("%d",&nota);
            media += nota*1.00;
            totalNot[i] = nota;
        }
        media = media / n ;
        for(i=0;i<n;++i){
            if(totalNot[i] > media){
                acima++;
            }
            
        }
        
        printf("%.3f%%\n",(acima*100.0 / n));
    }
    
    
    return 0;
}