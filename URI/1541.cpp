#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    double A, B, C, ult;
    
    while (scanf("%lf", &A) && A != 0 ) {
        scanf("%lf %lf", &B, &C); 
        ult = (A * B)/(C/100);
        printf("%.0lf\n", floor(sqrt(ult)));
    }
    
    return 0;
}