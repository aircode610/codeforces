#include <bits/stdc++.h>
#define int long long

using namespace std;

const int M = 3e5+10, INF=1e9+10;
int t, c[M], k[M];

void clear(int n, int m) {
  fill(k+1, k+n+1, 0);
  fill(c+1, c+n+1, 0);
}

void solve(){  
  int n, m;
  cin >> n >> m;
  clear(n, m);
  k[0] = INF;
  for (int i = 1; i <= n; i++)
    cin >> k[i];
  for (int i = 1; i <= m; i++)
    cin >> c[i];
  sort(k+1, k+n+1);
  reverse(k+1, k+n+1);
  int p=1, ans=0;
  for (int i = 1; i <= n; i++){
    if (c[p] < c[k[i]])
      ans += c[p++];
    else
      ans += c[k[i]];
  }
  cout << ans << endl;
}

int32_t main() {
  cin >> t;
  while (t--){
    solve();
  }
  return 0;
}

