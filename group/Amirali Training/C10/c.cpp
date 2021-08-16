#include <bits/stdc++.h>
#define int long long

using namespace std;

const int M = 200000+10;

int n, a[M], ans;
priority_queue <int, vector<int>, greater<int>> p;

int32_t main() {
  cin >> n;
  for (int i = 1; i <= n; i++)
    cin >> a[i];
  for (int i = 1; i <= n; i++){
    if (ans+a[i] >= 0){
      ans += a[i];
      p.push(a[i]);
    }
    else if (p.size() > 0 && a[i] > p.top()){
      ans -= p.top();
      ans += a[i];
      p.pop();
      p.push(a[i]);
    }
  }
  cout << p.size() << endl;
  return 0;
}
