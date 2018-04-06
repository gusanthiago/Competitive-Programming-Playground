#include <bits/stdc++.h>

using namespace std;

int countFruits(string line) {
  
  int count = 1;
  for (int i=1; i < line.size(); i++) {
    if (line[i] == ' ' && isalpha(line[i - 1])) count++;
  }
  return count;
}


int main() {
  
  int n,countIt, dayI = 0;
  double total = 0,totalFruits = 0, val;
  cin >> n;
  string line;
    
  while(n--) {
    
    cin >> val;
    cin.ignore();
    getline(cin, line);
    countIt = countFruits(line);
    
    totalFruits += countIt;
    total += val;
    cout << "day " << ++dayI << ": " << countIt << " kg" << endl;
    
  }
  
  printf("%.2f kg by day\n", ((double) totalFruits) / dayI);
  printf("R$ %.2f by day\n", ((double) total) / dayI);
  
  
  return 0;
}