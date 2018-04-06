#include <bits/stdc++.h>

using namespace std;

int rHunter,xHunter,yHunter, rFlower, xFlower, yFlower;

bool isDead() {

	double center_distance = (sqrt(pow((xFlower-xHunter), 2) + pow((yFlower-yHunter), 2))) + rFlower;
	
	return ! (rHunter >= center_distance);
}

int main() {

	while (cin >> rHunter >> xHunter >> yHunter >>  rFlower >>  xFlower >>  yFlower) {
		cout << (isDead() ? "MORTO" : "RICO") << endl;
	}


	return 0;
}