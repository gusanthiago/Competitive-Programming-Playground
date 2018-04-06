#include <bits/stdc++.h>

using namespace std;

int main() {
  
  int q, d, p,result;
  
  while (cin >> q) {
    if (! q) break;
    cin >> d >> p;
  
    result = (double) (q*d) / (p-q)*p;
    result = floor(result);
    
    cout << result << " pagina";
    if (result > 1) printf("s");
    printf("\n");
    
    
  }
  
  
  return 0;
}