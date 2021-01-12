#include <bits/stdc++.h>
#define int long long

using namespace std;

const int M = 2e5+10, MOD = 998244353;

int p[M];

#define _ %MOD
#define __ %=MOD

int32_t main() {
  int n; cin >> n;
  int ans = 0;
  p[0] = 1;
  for (int i = 1; i <= n; i++){
    p[i] = (10 * p[i-1]) _;
  }
  for (int i = 1; i <= n; i++){
    if (n == i){
      ans = 10;
      cout << ans << endl;
      continue;
    }
    ans = (2 * 10 * 9 * p[n-i-1]) + ((n-i-1) * 10 * 9 * 9 * p[n-i-2]);
    ans __;
    cout << ans << ' ';
  }
  return 0;
}
