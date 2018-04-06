#include <bits/stdc++.h>

using namespace std;

const int maxn = 2024;

int xArr[maxn], n,x;

int main () {
  
  cin >> n;
  
  memset(xArr, 0, sizeof xArr);
  
  while (n--) { 
    cin >> x;
    xArr[x]++;
      
  }  
  
  for (int i=0; i < maxn; i++) {
    if (xArr[i]) cout << i << " aparece " << xArr[i] << " vez(es)" << endl;
  }
   
    
  return 0;
    
}