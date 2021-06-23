#include <bits/stdc++.h>
#define int long long

using namespace std;

const int M = 1e5+10;
int t, n, l[M], r[M];
vector<int> g[M];

int32_t main() {
  cin >> t;
  while (t--){
    cin >> n;
    for (int i = 1; i <= n; i++)
      cin >> l[i] >> r[i];
    for (int i = 1; i < n; i++){
      int u, v;
      cin >> u >> v;
      g[u].push_back(v);
      g[v].push_back(u);
    }
  }
  return 0;
}
