#include <bits/stdc++.h>

using namespace std;

string processResult(string dodo, string leo, string pepper) 
{
  if ((dodo == "pedra" && leo == "tesoura" && leo == pepper) || 
      (dodo == "tesoura" && leo == "papel" && leo == pepper) || 
      (dodo == "papel" && leo == "pedra" && leo == pepper)) {
    return string ("Os atributos dos monstros vao ser inteligencia, sabedoria...");      
  } 
  if ((leo == "pedra" && dodo == "tesoura" && dodo == pepper) || 
      (leo == "tesoura" && dodo == "papel" && dodo == pepper) || 
      (leo == "papel" && dodo == "pedra" && dodo == pepper)) {
    return string ("Iron Maiden's gonna get you, no matter how far!");      
  } 
  if ((pepper == "pedra" && leo == "tesoura" && leo == dodo) || 
      (pepper == "tesoura" && leo == "papel" && leo == dodo) || 
      (pepper == "papel" && leo == "pedra" && leo == dodo)) {
    return string ("Urano perdeu algo muito precioso...");      
  } 
  return string("Putz vei, o Leo ta demorando muito pra jogar...");
  
}

int main() {
  
  string dodo, leo, pepper;
    
  while (cin >> dodo >> leo >> pepper) {
    cout << processResult(dodo, leo, pepper) << endl;
    // cin.ignore();
  }
  
  return 0;
}