#include <iostream>
 
using namespace std;
 
int main() {
 
  long long int unsigned n;
    
  while (cin >> n) {
      if (n == -1) break;

      if (n==0) cout << 0 << endl;
      else cout << n - 1<< endl;
      
      
  }
 
  return 0;
}