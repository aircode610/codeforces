#include <bits/stdc++.h>
#define int long long

using namespace std;

const int M = 2e5+10, INF = 1e18+10;
int t, a, b;

int32_t main() {
  cin >> t;
  while (t--){
    cin >> a >> b;
    if (a == b){
      cout << 0 << ' ' << 0 << endl;
      continue;
    }    
    int mn = min(a, b);
    int mx = max(a, b);
    int ans = mx-mn;
    int ms = INF;
    ms = min(mn, mn % ans);
    ms = min(ms, ans - mn % ans);
    cout << ans << ' ' << ms << endl;
  }
  return 0;
}
