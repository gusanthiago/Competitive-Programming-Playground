#include <stdio.h>
#include <string.h>

int main(){
    
    char num[1010];
    
    while (fgets(num,1010,stdin)) {
        
        int digito[10],tot=strlen(num),i=0;
        for (i=0;i<10;i++)
            digito[i] = 0;
            
        for (i=0;i<tot;i++)
            digito[ (num[i] - '0') ]++;
        
        int digitoMaior=0,inciMaior=0;
        
        
        for(i=0;i<10;i++) {
            if(inciMaior <= (int)digito[i]) {
                inciMaior = (int)digito[i];
                digitoMaior = i;
            }
        }
       
        printf("%d\n",digitoMaior);
        
    }
    
    return 0;
}