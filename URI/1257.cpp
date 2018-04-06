#include <bits/stdc++.h>

using namespace std;

int main () {
  
    int n,l, sum;
    string line;
    
    cin >> n;
    for (int i=0; i < n; i++) {
      
      cin >> l;
      cin.ignore();
      sum = 0;
      for (int z=0; z < l; z++) {
        getline(cin, line);
        sum += z * line.size();
        for (int j = 0; j < line.size(); j++) {
          sum += j + (line[j] - 'A');
    
        }
        // cout << line << endl;
      }
      cout << sum << endl;    
      
    }
  
  
  
  return 0;
}