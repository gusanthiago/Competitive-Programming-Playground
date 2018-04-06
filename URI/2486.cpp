#include <bits/stdc++.h>

using namespace std;

int main () {

	int n,totGram, t;
	map<string, int> fruits;
	string line;

	fruits["suco de laranja"] = 120;
	fruits["morango fresco"] = 85;
	fruits["mamao"] = 85;
	fruits["goiaba vermelha"] = 70;
	fruits["manga"] = 56;
	fruits["laranja"] = 50;
 	fruits["brocolis"] = 34; 
	

	while (cin >> n) {
		if (n == 0) break;
		totGram = 0;

		while (n--) {
			cin >> t;
			getchar();
			getline(cin, line);
			totGram += fruits[line] * t;
		}

		if (totGram >= 110 && totGram <= 130) {
			printf("%d mg\n", totGram);
		} else if (totGram < 110) {
			printf("Mais %d mg\n", 110 - totGram);
		} else {
			printf("Menos %d mg\n", totGram - 130);	
		}


	}




	return 0;
}