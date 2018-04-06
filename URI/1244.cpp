#include <bits/stdc++.h>

using namespace std;

bool orderGreather(const string a, const string b) {
  return a.size() > b.size();
}

int n;
string line,word;
vector <string> words;

void mySort() {
  for (int i=0; i < words.size(); i++) {
    
  
    int posTroca = -1;
    for (int j=i; j < words.size(); j++) {
      // if (words[i].length() >= words[j].length()) continue;
      if (i != j && words[j].length() > words[i].length()) {
        posTroca = j;
      }
    }
    if (posTroca != -1) {
      string aux = words[i];
      words[i] = words[posTroca];
      words[posTroca] = aux;
    }
  }
  
}

int main() {
  
  
  cin >> n;
  cin.ignore();
  while (n--) {
    
    getline(cin, line);
    word = "";
    words.clear();
    
    for (int i=0; i < line.size(); i++) {
      if (line[i] == ' ') {
        words.push_back(word);
        word = "";
        continue;
      }
      word += line[i];
    }
    if (word.length() && word.find(' ') == -1) words.push_back(word);
    // cout << words.size() << endl;
    
    stable_sort(words.begin(), words.end(), orderGreather);
    // reverse(words.begin(), words.end());

    for (int i=0 ; i < words.size(); i++) {
      cout << words[i];
      if (i != words.size() - 1) cout << " ";
    }
    cout << endl;
    
  }
  
  
  
  return 0;
}