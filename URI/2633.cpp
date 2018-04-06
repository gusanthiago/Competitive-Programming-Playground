#include <bits/stdc++.h>

using namespace std;

typedef struct {
	string name;
	int dayValid;
}eat;

bool func(eat a, eat b)	 {
	return a.dayValid < b.dayValid;
}

int main() {


	vector<eat> churras;
	int n;

	while (cin >> n) {
		churras.clear();
		while (n--) {
			eat newEat;
			cin >> newEat.name >> newEat.dayValid;
			churras.push_back(newEat);
		}

		sort(churras.begin(), churras.end(), func);
		for (int i=0; i < churras.size(); i++) {
			cout << churras[i].name;
			if (i != churras.size() - 1) cout << " ";
		}
		cout << endl;

	}



	return 0;
}