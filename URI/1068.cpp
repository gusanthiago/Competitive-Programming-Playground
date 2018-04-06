#include <bits/stdc++.h>

using namespace std;

int main () {

	string n;
	stack<char> elm;
	int flag,cont;
	char troca;

	while(getline(cin, n)) {

		for (int i=n.size() - 1; i >= 0; i--) 
			if (n[i] == '(' || n[i] == ')') elm.push(n[i]);

		flag = 1;
		cont = 0;
		int tot = elm.size();
		if (tot % 2 != 0) flag = 0;

		while (! elm.empty() && flag) {

			if (elm.top() == ')') cont--;
			else if (elm.top() == '(') cont++;
			if (cont < 0) {
				flag = 0;
			}
			elm.pop();
		}

		while (! elm.empty())
			elm.pop();

		if (flag && cont == 0) cout << "correct" << endl;
		else cout << "incorrect" << endl;
		


	}


	return 0;
}