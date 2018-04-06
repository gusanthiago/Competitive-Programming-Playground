#include <bits/stdc++.h>

using namespace std;

int main() {
  
  int a,b,c, minA,minB,minC;
  
  cin >> a >> b >> c;
  
  
  
  minA = (b * 2) + (c * 2 * 2);
  minB = (a * 2) + (c * 2);
  minC = (a * 2 * 2) + (b * 2);
  
  if (minB < minA) minA = minB;
  if (minC < minA) minA = minC;
  
  cout << minA << endl;
  
  return 0;
}