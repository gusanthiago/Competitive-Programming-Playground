#include <bits/stdc++.h>

using namespace std;

#define huge long int

huge removeZero(huge x) {
  
  huge total = 0, ten = 1;
  while (x >= 10) {
    if (x % 10) { 
      total += (x % 10) * ten; 
      ten *= 10;
    }
    x /= 10;
  }
  
  total+= x * ten;
  return total;
}


int main() {
  
  huge n,m;
    
  while(scanf(" %ld %ld", &n, &m) && n + m != 0) {
    
    cout << removeZero(n+m) << endl;
    
  } 
  
  
  
  return 0;
}