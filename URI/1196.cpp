#include <bits/stdc++.h>

using namespace std;

int main() {


	string quertu = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
	string line;

	while (getline(cin, line)) {

		for (int i=0; i < line.size(); i++) {
			if (line[i] != ' ') { 
				int findI = quertu.find(line[i]) - 1;
				if (findI == -1) continue;
				printf("%c", quertu[findI]);
			} else {
				printf(" ");
			}
		}
		printf("\n");

	}



	return 0;
}