#include <bits/stdc++.h>
#define int long long

using namespace std;

void cal (int n, int x){
  deque<int> a;
  int maxel = 0;
  for (int i = 1; i <= n; i++){
    int num;
    cin >> num;
    a.push_back(num);
  }
  int ans = 0;
  while (a[0] % x == 0){
    ans += a[0];
    for (int i = 1; i <= x; i++){
      a.push_back(a[0]/x);
    }
    a.pop_front();
  }
  while (a.size()){
    ans += a[0];
    a.pop_front();
  }
  cout << ans << endl;
}

int32_t main() {
  int t;
  cin >> t;
  while (t--){
    int n, x;
    cin >> n >> x;
    cal(n, x);
  }
  return 0;
}

