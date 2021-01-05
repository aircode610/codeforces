#include <bits/stdc++.h>
#define int long long

using namespace std;

void cal(int n){
  deque<int> even, odd;
  for (int i = 0; i < n; i++){
    int num; cin >> num;
    if (num % 2 == 0)
      even.push_back(num);
    else
      odd.push_back(num);
  }
  sort(even.begin(), even.end());
  reverse(even.begin(), even.end());
  sort(odd.begin(), odd.end());
  reverse(odd.begin(), odd.end());
  even.push_back(0);
  odd.push_back(0);
  
  int alice=0, bob=0;
  
  while (even[0] != 0 || odd[0] != 0){
    if (even[0] > odd[0]){
      alice += even[0];
      even.pop_front();
    }
    else {
      odd.pop_front();
    }
    if (even[0] == 0 && odd[0] == 0)
      break;
    if (odd[0] > even[0]){
      bob += odd[0];
      odd.pop_front();
    }
    else {
      even.pop_front();
    }
  }
  
  if (alice > bob)
    cout << "Alice" << endl;
  else if (bob > alice)
    cout << "Bob" << endl;
  else
    cout << "Tie" << endl;
}

int32_t main() {
  int t; cin >> t;

  while (t--){
    int n; cin >> n;
    cal(n);
  }
  
  return 0;
}
