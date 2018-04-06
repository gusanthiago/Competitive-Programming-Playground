#include <iostream>
#include <cstring>
#include <stdio.h>

using namespace std;

long int converteBin(string s1) {
    int len = s1.size() - 1;
    long int tot=0,pot=1;
    
    for(int i=0;i<=len;i++) {
        
        if (s1[len-i] == '1') {
            tot += pot;     
        }
        pot*=2;
        
    }
    return tot;
    
}

int main() {
    
    int novo;
    string s1,s2;
    cin >> novo;
    getline(cin, s1);
    
    for(int i=1;i<=novo;i++) {
        
        getline(cin, s1);
        getline(cin, s2); 
        
        long int m=converteBin(s1),n=converteBin(s2),r;
        r = m % n;
        
        while(r!=0) {
            
            m = n;
            n = r;
            r = m % n;
            
        }
        
        if(n!=1){
            cout << "Pair #" << i << ": All you need is love!" << endl;
        }else {
            cout << "Pair #" << i << ": Love is not all you need!" << endl;
            
        }
        
        
    }
    
    
    
    return 0;
}