#include <bits/stdc++.h>

using namespace std;

int main() {


	int dA,dB,dC;
	int a,b,c;

	cin >> dA >> dB >> dC;
	cin >> a >> b >> c;
	int notAttendig = 0;
	if (dA - a < 0) notAttendig += dA - a;
	if (dB - b < 0) notAttendig += dB - b;
	if (dC - c < 0) notAttendig += dC - c;


	cout << abs(notAttendig) << endl;





	return 0;
}