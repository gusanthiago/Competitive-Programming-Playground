#include <iostream>

using namespace std;

int main () {
    
    int l;
    while(cin >> l) {
        
        int i=0, lesM=0, tmp=0;
        while(l--) {
            cin >> tmp;
            if (lesM <= tmp) {
                lesM = tmp;
            }
        }
        
        if(lesM < 10) {
            cout << 1 << endl;
        }else if(lesM < 20) {
            cout << 2 << endl;
        }else {
            cout << 3 << endl;
        }
        
    }
    
    
    return 0;
}