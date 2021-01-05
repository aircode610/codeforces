#include <iostream>
#include <string>

using namespace std;

char vowels[5] = {'a', 'e', 'i', 'o', 'u' };

bool isVowel(char c){

  for (int i = 0; i < 5; i++){
    if (vowels[i] == c){
      return true;
    }
  }

  return false;
  
}

int main() {

  string s, t;
  cin >> s >> t;

  
  
  if (s.length() != t.length()){
    cout << "No";
  }
  else {

    bool con = true;
    
    for (int i = 0; i < s.length(); i++){
      if (isVowel(s[i]) != isVowel(t[i])){
	con = false;
	break;
      }
    }

    if (con == false){
      cout << "No";
    }
    else {
      cout << "Yes";
    }
    
  }
  
  return 0;
  
}
