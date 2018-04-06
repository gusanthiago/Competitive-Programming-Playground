#include <stdio.h>
#include <math.h>

int main() {
    
    double w1,w2,r;
    double geral = 0;
    int d = 0;
    
    while(scanf("%lf %lf %lf",&w1,&w2,&r) && (w1 + w2 + r) != 0) {
        
        double fb = w1*(1+(r/30)) + w2*(1+(r/30));
        fb = fb /2;
        
        // printf("%lf\n",fb);
        if (fb < 13){
            printf("Nao vai da nao\n");
        } else if (fb >= 13 && fb <14 ){
            printf("E 13\n");
        } else if (fb < 40) {
            printf("Bora, hora do show! BIIR!\n");
        } else if (fb < 60) {
            printf("Ta saindo da jaula o monstro!\n");
        } else {
            printf("AQUI E BODYBUILDER!!\n");
        }
        
        geral += fb;
        d++;
    }
    
    if (geral/d >40) {
        printf("\nAqui nois constroi fibra rapaz! Nao e agua com musculo!\n");
    }
    
    
    return 0;
}