#include <bits/stdc++.h>

using namespace std;

// Returns position of survivor among a circle
// of n persons and every second person being
int josephus(int n, int k)
{
  if (n == 1)
    return 1;
  else
    /* The position returned by josephus(n - 1, k) is adjusted because the
       recursive call josephus(n - 1, k) considers the original position 
       k%n + 1 as position 1 */
    return (josephus(n - 1, k) + k-1) % n + 1;
}
 
int choiceM(int n) {

	if (n == 13) {
		return 1;
	} else {

		int i = 2;
		n--;
		int m = josephus(n, i);
		while (m != 12) {
			i++;
			m = josephus(n, i);
		}
		return i;
	}



}
	
int main() {

	int n;

	while (scanf(" %d", &n) && n != 0) {
		cout << choiceM(n) << endl;

	} 





	return 0;
}