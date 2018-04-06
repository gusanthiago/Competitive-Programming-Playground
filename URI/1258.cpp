#include <bits/stdc++.h>


using namespace std;

typedef struct {
	string nameStudent,color;
	char size;
}tshirtStudent;

bool orderShirts(tshirtStudent a, tshirtStudent b){
	if (a.color != b.color) {
		return a.color < b.color;
	}
	if (a.size != b.size) {
		return a.size > b.size;
	}
	return a.nameStudent < b.nameStudent;
}


int main() {

	vector<tshirtStudent> listShirts;
	int n;

	cin >> n;
	while (n) {

		cin.ignore();
		listShirts.clear();

		for (int i=0; i < n; i++) {

			tshirtStudent newShirt;
			getline(cin, newShirt.nameStudent);
			cin >> newShirt.color >> newShirt.size;
			cin.ignore();
			listShirts.push_back(newShirt);
		}

		sort(listShirts.begin(), listShirts.end(), orderShirts);

		for (int i=0; i < n; i++) {
			cout << listShirts[i].color << " " << listShirts[i].size << " " << listShirts[i].nameStudent << endl;
		}
		cin >> n;
		if (n) cout << endl;
	}	




	return 0;
}