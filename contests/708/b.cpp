#include <bits/stdc++.h>
#define int long long

using namespace std;

const int M = 1e5+10;
int a[M];

void clear(int n){
  fill(a, a+n , 0);
}

void solve() {
  int n, m;
  cin >> n >> m;
  clear(n);
  for (int i = 1; i <= n; i++){
    int inp; cin >> inp;
    a[inp%m]++;
  }
  int ans = 0;
  if (a[0] > 0)
    ans = 1;
  //cout << a[0] << endl;
  for (int i = 1; i <= m/2; i++){
    int dif = abs(a[i]-a[m-i]);
    if (a[i] == 0 && a[m-i] == 0)
      continue;
    if (dif == 0)
      ans++;
    else
      ans += dif;
    //cout << dif << ' ' << ans << endl;
  }
  cout << ans << endl;
}

int32_t main() {
  int t;
  cin >> t;
  while (t--){
    solve();
  }
  return 0;
}
