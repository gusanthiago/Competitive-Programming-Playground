#include <bits/stdc++.h>

using namespace std;

int main() {
  
  int n;
  double sumDividend,sumDivisor, mI, cI;
  
  while (cin >> n) {
    
    sumDividend = 0;
    sumDivisor = 0;
    while (n--) {
      cin >> mI >> cI;
      sumDividend += mI * cI;
      sumDivisor += cI;
      
    }
    sumDivisor *= 100;
    
    printf("%.4f\n", sumDividend / sumDivisor);
    
    
  }
  
  
  
  return 0;
}