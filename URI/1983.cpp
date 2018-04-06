#include <bits/stdc++.h>

using namespace std;

int main () {
  
  int n, instmp, maiorInsc;
  double maiorN,nota;
  cin >> n;
  
  cin >> instmp >> nota;
  n--;
  maiorN = nota;
  maiorInsc = instmp;
  while(n--) {
      
      
    cin >> instmp >> nota;
    
    if (nota > maiorN) {
      maiorN = nota;
      maiorInsc = instmp;
    }
  
    
  }
  
 if (maiorN < 8) {
   cout << "Minimum note not reached" << endl; 
 } else {
   cout << maiorInsc << endl;
 }
  
}