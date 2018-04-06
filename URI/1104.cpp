#include <bits/stdc++.h>

using namespace std;
#define maxn 100010

void debug(int vetA[maxn],int vetB[maxn],int n1,int n2) {
    
    // cout << "vet a ";
    // for(int i=0;i<n1;i++)
    //     cout << " i = " << i << " = " << vet[i] << endl;
    // cout << endl;
    
    // cout << "vetB b ";
    // for(int i=0;i<n2;i++)
    //     cout << "i = " << i << " = " << vetB[i] << endl;
    // cout << endl;
} 


int main() {
    
    int a,b,vetA[maxn],vetB[maxn],conta,le;
    
    vector<int> avec;
    vector<int> bvec;
    
    while(scanf("%d %d\n",&a,&b) && a && b) {
        
        conta = 0;
        memset(vetA, 0, sizeof vetA);
        memset(vetB, 0, sizeof vetB);
        
        for(int i=0;i<a;i++)  {
            cin >> le;
            if(!vetA[le]) {
                avec.push_back(le);
                vetA[le]++; 
            }
        }
        
        for(int i=0;i<b;i++) {
            cin >> le;
            if(!vetB[le]) {
                bvec.push_back(le);
                vetB[le]++;
            }
        }
        
        if (avec.size() > bvec.size()){
            
            for(int i=0;i<bvec.size();i++){
                if(vetB[bvec.at(i)] >= 1 && vetA[bvec.at(i)] == 0) {
                    conta++;
                } 
            }
            
        } else {
            
            for(int i=0;i<avec.size();i++){
                if(vetA[avec.at(i)] && vetB[avec.at(i)] == 0){
                    conta++;
                } 
            }
            
        }
        
        
        cout << conta << endl;
        
        avec.clear();
        bvec.clear();
        
        
    }
    
    
    return 0;
}