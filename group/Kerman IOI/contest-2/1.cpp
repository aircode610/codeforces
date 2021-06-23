#include <iostream>

using namespace std;

int main() {
  
  int n; cin >> n;

  int sides;
  for (int i = 0; i < n; i++){
    cin >> sides;
    if (sides % 4 == 0){
      cout << "YES" << endl;
    }else{
      cout << "NO" << endl;
    }
  }
  
  return 0;
  
}
