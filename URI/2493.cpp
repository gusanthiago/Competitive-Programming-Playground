#include <bits/stdc++.h>

using namespace std;

typedef struct {
	int number1,number2,resp;
}op;


int main () {
	
	int n, nResp;
	vector<op> comp;
	vector<string> pass;
	string name;
	char resp;

	while (cin >> n) {

		comp.clear();
		pass.clear();
		for (int i=0; i < n; i++) {
			op newOp;
			scanf(" %d %d=%d", &newOp.number1, &newOp.number2, &newOp.resp);
			comp.push_back(newOp);
		}


		for (int i=0; i < n; i++) {
			cin.ignore(); 
			cin >> name >> nResp >> resp;
			if (resp == '+' && comp[nResp - 1].number1 + comp[nResp - 1].number2 != comp[nResp - 1].resp) {
				pass.push_back(name);
			} else if (resp == '-' && comp[nResp - 1].number1 - comp[nResp - 1].number2 != comp[nResp - 1].resp) {
				pass.push_back(name);
			} else if (resp == '*' && comp[nResp - 1].number1 * comp[nResp - 1].number2 != comp[nResp - 1].resp) {
				pass.push_back(name);
			} else if (resp == 'I') {
				if (comp[nResp - 1].number1 * comp[nResp - 1].number2 == comp[nResp - 1].resp ||
						comp[nResp - 1].number1 - comp[nResp - 1].number2 == comp[nResp - 1].resp || 
						comp[nResp - 1].number1 + comp[nResp - 1].number2 == comp[nResp - 1].resp) {
					pass.push_back(name);
				}
			}
 		}

 		if (pass.size() == n) {
 			cout << "None Shall Pass!" << endl;
 		} else if (! pass.size()) {
 			cout << "You Shall All Pass!" << endl;
 		} else {
 			sort(pass.begin(), pass.end());
 			for (int i=0; i < pass.size(); i++) {
 				cout << pass[i];
 				if (i != pass.size() - 1) cout << " ";
 			}
 			cout << endl;
 		}



	}



}