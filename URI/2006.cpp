#include <bits/stdc++.h>


using namespace std;


int main () {

	int temp,x,sum = 0;

	cin >> x;
	for (int i=0; i < 5;i++) {
		cin >> temp;
		if (temp == x)
			sum++;
	}
	cout << sum << endl;





	return 0;
}