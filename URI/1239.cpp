#include <bits/stdc++.h>

using namespace std;

int main() {

	char c;
	bool openI,openB;

	openI = false;
	openB = false;
	while (scanf("%c", &c) != EOF) {

		if (c == '_') {

			if (! openI) {
				openI = true;
				printf("%s", "<i>");
			} else {
				openI = false;
				printf("%s", "</i>");
			}

		} else if (c == '*') {
			if (! openB) {
				openB = true;
				printf("%s", "<b>");
			} else {
				openB = false;
				printf("%s", "</b>");	
			} 
		} else {
			printf("%c", c);
		}


	}


	return 0;
}