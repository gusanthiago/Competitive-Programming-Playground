#include <bits/stdc++.h>


using namespace std;

int main () {
  float tot;
  int n,cont;
  cin >> n;
  while (n--) {
    cont = 0;
    
    cin >> tot;
    
    while (tot > 1) {
      cont++;
      tot /= 2;
    }
    
    
    cout << cont <<" dias" << endl;
    
  }
  
  
  
  return 0;
}