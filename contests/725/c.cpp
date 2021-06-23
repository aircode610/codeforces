#include <bits/stdc++.h>
#define int long long

using namespace std;

int solve() {
  int n, l, r;
  cin >> n >> l >> r;
  int a[n+1], ans=0;
  for (int i = 1; i <= n; i++)
    cin >> a[i];
  sort(a+1, a+n+1);
  reverse(a+1, a+n+1);
  int pre[n+1];
  
  return ans;
}

int32_t main() {
  int t; cin >> t;
  while (t--){
    cout << solve() << endl;
  }
  return 0;
}
