#include <bits/stdc++.h>

using namespace std;

int main () {

	int h,m,anterior, atraso;

	while(scanf("%d:%d", &h, &m) != EOF) {
		atraso = 0;
		anterior = 0;
		
		if (h >= 8) {

			atraso = (abs(7 - h) * 60) + m; 

		} else {
			if (m != 0) {
				anterior += 60 - m; 
			} 
			if (m != 0 && h < 8) {
				anterior += (8 - (h + 1)) * 60;
			}
			if (m == 0 && h < 8) {
				anterior += ((8 - h)* 60);
			}
			atraso = anterior - 60;
		}

		// cout << anterior  << "  m " << m << " h " << h <<  endl;
		
		if (h < 7 || (h == 7 && m < 1)) {
			cout << "Atraso maximo: 0" << endl;
		} else { 
			cout << "Atraso maximo: " << abs(atraso) << endl;
		}

		// cout << h << m << endl;
	

	}





	return 0;
}