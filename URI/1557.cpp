#include <iostream>
#include <cstring>
#include <iomanip>


using namespace std;

int main() {
    
    int n;
    
    while(cin >> n && n != 0){
        int mat[n][n];
        
        int v=1;
        
        memset(mat,0,sizeof mat);
        
        for (int i=0;i<n;i++) {
            for (int z=0;z<n;z++) {
                 if(i == 0) {
                    mat[i][z] = v;
                    v*=2;
                } else {
                    mat[i][z] = mat[i-1][z]*2; 
                }
            }
            v=1;
        }
        
        int pot=1,t=0;
        
        while (pot <= mat[n-1][n-1]) {
            pot *=10;
            t += 1;
        }
        
        for (int i=0;i<n;i++) {
            for(int z=0;z<n;z++) {
            
                
                cout << setw(t) << mat[i][z];
                if(z!=n-1)
                    cout << " ";
            }
            cout << endl;
        }
        cout << endl;
        
    }
    
    
    
    return 0;
}