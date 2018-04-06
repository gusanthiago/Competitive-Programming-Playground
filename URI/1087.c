#include <stdio.h>

typedef struct{
    int x,y;
}pair;

int main(){
    
    int x1,y1,x2,y2;
    while(scanf("%d %d %d %d", &x1, &y1,&x2, &y2) != EOF && x2+x1+y2+y1 != 0) {
        
        
        if(x1 == x2 && y1 == y2) {
            printf("0\n");
        }else{
            
            int i,flag=0;
            pair def,ult;
            def.x = x1;
            def.y = y1;
            ult.x = x2;
            ult.y = y2;
            
            pair d1=def,d2=def,d3=def,d4=def;
            
            for (i=1;i<=7;i++) {
             
                d1.x+=1;
                d1.y+=1;
                
                d2.x-=1;
                d2.y-=1;
                
                d3.x+=1;
                d3.y-=1;
                
                d4.x-=1;
                d4.y+=1;
                
                if((d1.x == ult.x && d1.y == ult.y ) ||
                   (d2.x == ult.x && d2.y == ult.y ) ||
                   (d3.x == ult.x && d3.y == ult.y ) ||
                   (d4.x == ult.x && d4.y == ult.y )){
                       
                    // printf("1 %d %d\n",d1.x,d1.y);
                    // printf("2 %d %d\n",d2.x,d2.y);
                    // printf("3 %d %d\n",d3.x,d3.y);
                    // printf("4 %d %d\n",d4.x,d4.y);   
                    flag = 1;
                    break;
                }
                
                
                
            }    
            
            

            if(x1 == x2 || y1 == y2 || flag) {
                printf("1\n");
            }
            else {
                printf("2\n");
            }
            
        }
    
        
    }
    
    
    return 0;
}