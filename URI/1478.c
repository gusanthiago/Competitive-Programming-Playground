#include <stdio.h>

int main(){
    
    int i,z;
    int le=1;
    while(scanf("%d",&le) && le != 0) {
        int mat[le][le];
        int cont=1;
        for(i=0;i<le;i++) {
            for(z=0;z<le;z++) {
                mat[i][z] =0;
                if(!i){
                    mat[i][z] = cont;
                    cont++;
                } else if(!z) {
                    mat[i][z] = cont-le+1;  
                    cont++;
                } else {
                    mat[i][z] = mat[i-1][z-1];
                }
                
                   
            }
        }
        for(i=0;i<le;i++){
            for(z=0;z<le;z++){
                if(z==le-1){
                    printf("%3d",mat[i][z]);   
                }else {
                    printf("%3d ",mat[i][z]);   
                }
            }
            printf("\n");
        }
        printf("\n");
    }
    
    
    
    return 0;
}