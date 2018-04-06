#include <bits/stdc++.h>

using namespace std;


vector<int>valores, pesos;
// // index x peso;
// int dp[128][700];

int unboundedKnapsack(int W, int n)
{
    int dp[W+1];
    memset(dp, 0, sizeof dp);
 
    int ans = 0;
 
    for (int i=0; i<=W; i++)
      for (int j=0; j<n; j++)
         if (pesos[j] <= i)
            dp[i] = max(dp[i], dp[i-pesos[j]]+valores[j]);
 
    return dp[W];
}


int main() {
  
  int n, t, tempo, valor;
  
  cin >> n;
  while (n != 0) {
    cin >> t;
    valores.clear();
    pesos.clear();
        
    for (int i=0; i < n; i++) {
      cin >> tempo >> valor;
      valores.push_back(valor);
      pesos.push_back(tempo);
      cout << valores[i] << endl;
    }
    cout << unboundedKnapsack(t, valores.size()) <<" min." << endl;
  
    cin >> n;
  }
  
  
  
  
  
  
  return 0;
}