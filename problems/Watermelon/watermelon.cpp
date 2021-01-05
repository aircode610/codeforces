#include<iostream>

using namespace std;

int main(){

  int weight;
  cin >> weight;
  
  if (weight % 2 == 0 and weight > 2){
    cout << "YES" << endl;
  }
  else{
    cout << "NO" << endl;
  }
  return 0;

}
