#include <stdio.h>
#include <string.h>

int main(){
    
    char str[50],i=0,flag=0;
    
    while(fgets(str,50,stdin)){
        
        int tot = strlen(str);
  
        if(!isspace(str[0])) printf("%c",toupper(str[0]));
        else flag=1;
        
        for(i=1;i<tot;++i){ 
            
            if(!isspace(str[i])){
                
                //1 toupper
                if(flag){
                    str[i] = toupper(str[i]);
                    
                    flag = 0;
                //0 tolower                
                }else{
                    str[i] = tolower(str[i]);
                    
                    flag = 1;
                }
                
            }
            
            printf("%c",str[i]);
            
        }
        
        
    }
    return 0;
}