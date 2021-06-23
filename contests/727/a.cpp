#include <bits/stdc++.h>
#define int long long

using namespace std;

int32_t main() {
  int k; cin >> k;
  while (k--){
    int n, x, t;
    cin >> n >> x >> t;
    int ans;
    if (t < x){
      cout << 0 << endl;
      continue;
    }
    else {
      int dis = t/x;
      if (n > dis)
	ans = dis*(dis-1)/2;
      else
	ans = n*(n-1)/2;
      if (n-dis >= 0)
	ans += (n-dis)*dis;
    }
    cout << ans << endl;
  }
  return 0;
}
