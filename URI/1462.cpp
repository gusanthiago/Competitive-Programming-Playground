#include <bits/stdc++.h>

using namespace std;

typedef long long int huge;

const int maxn = 100010;
const int inf = 0x3fff3fff;

huge friends[maxn];
huge sumDegreesLeft[maxn];

huge sum_interval(huge start, huge end, huge minimum) {
  huge *p = lower_bound(friends+start, friends+end+1, minimum, greater<huge>());
  huge num_elem = p-friends;
  huge remaining_elem = num_elem-start;
  huge sum_lower_elements = sumDegreesLeft[end] - sumDegreesLeft[num_elem-1];
  return sum_lower_elements+remaining_elem * minimum;
}


bool isValidCommunity(int n) {
  
  if (friends[n] % 2 == 1) {
    return false;
  }
  
  for(huge k=1; k<=n; ++k) {
    // printf("%d > %d + %d\n",
    //       sum_interval(1, k, maxn + 10),
    //       k*(k-1),
    //       sum_interval(k+1, n, k));
    if (sum_interval(1, k, inf) > k*(k-1) + sum_interval(k+1, n, k))
      return false;
  }
  return true;  
}


int main() {
  
  int n;
  
  while (scanf(" %d", &n) != EOF) {
    
    
    for (int i=1; i <= n; i++) {
      scanf(" %lld", &friends[i]);
    }
    
    sort(friends+1, friends+n+1, greater<huge>());
    sumDegreesLeft[0] = 0;
    for (int i=1; i <= n; i++) {
      // sumDegreesLeft[i] += sumDegreesLeft[i - 1] + friends[i];
      sumDegreesLeft[i]=sumDegreesLeft[i-1]+friends[i];
    }
    
    printf("%s\n", isValidCommunity(n) ? "possivel" : "impossivel");
    
  }
  
  
  
  
  return 0;
}