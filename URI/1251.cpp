#include <bits/stdc++.h>

using namespace std;
	
const int maxn = 130;

int letters[maxn];

typedef struct {
	int letter;
	int quantity;
} contLetter;


bool orderLetter(contLetter a, contLetter b) {
	if (a.quantity != b.quantity) 
		return a.quantity < b.quantity;

	if (a.letter != b.letter) 
		return a.letter > b.letter;
}

int main() {

	string line;

	vector<contLetter> frequencies;


	while (getline(cin, line)) {
		
		if (! frequencies.empty()) {
			cout << endl;
		}	
		frequencies.clear();
		memset(letters, 0, sizeof letters);
		int countLetters = line.size();		

		for (int i=0; i < countLetters; i++) {
			letters[(int)line[i]]++;
		}

		for (int i=0; i < maxn; i++) {
			if (letters[i]) {
				contLetter newCont;
				newCont.letter = i;
				newCont.quantity = letters[i];
				frequencies.push_back(newCont);
			}
		}

		sort(frequencies.begin(), frequencies.end(), orderLetter);

		for (int i=0, totalFrequencies = frequencies.size(); i < totalFrequencies; i++) {
			cout << (int)frequencies[i].letter << " " << frequencies[i].quantity << endl;
		}

	}



	return 0;
}