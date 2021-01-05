#include <iostream> 
#include <string> 
using namespace std; 
  
int main() 
{
  string count;
  getline(cin, count);
  
  string str; 
  getline(cin, str);

  if (str.find('1') != string::npos) 
    cout << "HARD";
  else{
    cout << "EASY";
  }
  
  return 0; 
} 
