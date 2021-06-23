#include <bits/stdc++.h>
#define int long long

using namespace std;

int t;

int32_t main() {
  cin >> t;
  while (t--){
    int x, y, ans=0;
    cin >> x >> y;
    for (int i = 1; i*i < x; i++)
      ans += max(0LL, min(y, x/i-1)-i);
    cout << ans << endl;
  }
  return 0;
}

