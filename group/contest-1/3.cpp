#include <iostream>
#include <string>
using namespace std;

int main() {

  string input;
  getline(cin, input);
  int len = stoi(input);
  
  string str;
  getline(cin, str);
  
  string alphabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
  bool con = true;
  
  for (int i = 0; i < 26; i++){

    if ((str.find(alphabet[i]) != string::npos ||
	 str.find(alphabet[i + 26]) != string::npos) == false){
      con = false;
      break;
    }

  }
  
  if (con == true){
    cout << "YES";
  }
  else {
    cout << "NO";
  }
  
  return 0;
  
}
