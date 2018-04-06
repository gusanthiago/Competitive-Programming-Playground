#include <bits/stdc++.h>

using namespace std; 

const int maxn = 512;

int getMaxNumberForCollatzSequence(int number) 
{
  int maxNumber = number;
  while (number != 1) {
    number = number % 2 == 0 ? number / 2 : number * 3 + 1; 
    maxNumber = max(maxNumber, number);
    
  }
  return maxNumber;
}


int main () {
  
  int n;
  
  while (cin >> n) {
    if (! n) break;
    cout << getMaxNumberForCollatzSequence(n) << endl;
  }
  
  return 0;
}