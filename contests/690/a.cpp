#include <bits/stdc++.h>

using namespace std;

void sequence(vector<int> test){
  int answers[test.size()];
  int l = 0;
  int r = test.size()-1;
  int count = 0;
  while (l <= r){
    answers[count++] = test[l++];
    answers[count++] = test[r--];
  }
  for (int i = 0; i < test.size(); i++){
    cout << answers[i] << " ";
  }
  cout << endl;
}

int main(){
  int tests; cin >> tests;
  for (int i = 1; i <= tests; i++){
    int n; cin >> n;
    vector<int> test;
    for (int i = 1; i <= n; i++){
      int num; cin >> num;
      test.push_back(num);
    }
    sequence(test);
  }
  return 0;
}
