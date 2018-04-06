#include <bits/stdc++.h>

using namespace std;

int choiceGrayScale(string choice, double r, double g, double b) {


	if (choice == "min") return (int)min(min(r, g), b);
	else if (choice == "max") return (int)max(max(r, g), b);
	else if (choice == "mean") return (r + g + b) / 3 ;
	else {
		int p = 0.30*r + 0.59*g + 0.11*b;
		return p;
	}

}


int main() {

	string choice;
	int n,caseI=0;
	double r,g,b;
	cin >> n;

	while (n--) {
		cin >> choice;
		cin >> r >> g >> b;
		cout << "Caso #" << ++caseI << ": " << choiceGrayScale(choice, r, g, b) << endl;
	}




	return 0;
}