#include <iostream>
#include <vector>

using namespace std;

bool isDistinct(int num){

  vector<int> checked;

  while (num != 0){
    int digit = num % 10;
    
    for (int i = 0; i < checked.size(); i++){
      if (checked[i] == digit){
	return false;
      }
    }

    checked.push_back(digit);
    num /= 10;
    
  }
  
  return true;
}

int distinct(int l, int r){

  for (int i = l; i <= r; i++){
    if (isDistinct(i)){
      return i;
    }
  }
  
  return -1;
  
}

int main() {

  int l, r;
  cin >> l >> r;

  cout << distinct(l, r) << endl;

  return 0;
  
}
