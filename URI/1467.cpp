#include <bits/stdc++.h>

using namespace std;

int main () {
    
   int a,b,c;
   
   while(cin >> a >> b >> c) {
      
      if (a == b && b == c) {
         cout << "*" << endl;
      } else if (a == b && c != b) {
         cout << "C" << endl;
      } else if (c == a && b != a) {
         cout << "B" << endl;
      } else if (b == c && a != b) {
         cout << "A" << endl;
      }
   }
   
    
 
   return 0;
    
}