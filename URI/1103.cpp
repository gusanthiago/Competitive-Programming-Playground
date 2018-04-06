#include <bits/stdc++.h>

using namespace std;

int main(){
  
  int hI,hF,mI,mF;
  cin >> hI >> mI >> hF >> mF;
  while (hI + hF + mI + mF != 0) {
    
    int totM = 0;
    
    if (hI == hF && mI > mF)
      totM = 24 * 60 - (mI - mF);
    else if (hI == hF && mI < mF)
      totM = mF - mI;
    else if (hI < hF) 
      totM = (hF - hI - 1) * 60 + ((60 - mI) + mF);
    else if (hI > hF)
      totM = ((24 - hI - 1) * 60 + hF * 60) + (60 - mI) + mF;
    
      
      
    
    cout << totM << endl;
      
      
    cin >> hI >> mI >> hF >> mF;
  }
  
  return 0;
}