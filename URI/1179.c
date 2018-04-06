#include <stdio.h>


int main(){
    
    int roda=15,impar=0,par=0,vetPar[5],vetImp[5],le=0,i=0;
    
    while(roda--){
        
        scanf("%d",&le);
        if(le % 2 == 0){
            
            vetPar[par] = le;
            par++;
            if(par==5){
                
                for(i=0;i<5;++i)
                    printf("par[%d] = %d\n",i,vetPar[i]);        
                
                par = 0;
            }
        }else{
            
            vetImp[impar] = le;
            impar++;
            if(impar==5){
                
                for(i=0;i<5;++i)
                    printf("impar[%d] = %d\n",i,vetImp[i]);        
                
                impar = 0;
            }
            
        }
        
        
    }
    

    for(i=0;i<impar;++i)
        printf("impar[%d] = %d\n",i,vetImp[i]);        

    for(i=0;i<par;++i)
        printf("par[%d] = %d\n",i,vetPar[i]);        

    return 0;
}