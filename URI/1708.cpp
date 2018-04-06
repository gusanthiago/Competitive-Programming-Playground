#include <bits/stdc++.h>

using namespace std;

int main() {


	int x, y, contVolt = 1, statusX = 0, statusY = 0;

	cin >> x >> y;
	statusX = x;
	statusY = y - x;

	while (1) {
		if (statusX <= 0) {
			break;
		}
		statusX -= statusY;
		contVolt++;
	}
	cout << contVolt << endl;


	return 0;
}