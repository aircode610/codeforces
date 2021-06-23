#include <bits/stdc++.h>
#define int long long

using namespace std;

const int M = 4e5+10, MOD = 1e9+7;;
int marked[M], f[M], s[M];
vector<int> g[M];

void clear(int n){
  for (int i = 1; i <= n; i++){
    g[i].clear();
    marked[i] = false;
  }
}

void dfs(int v, int par){
  marked[v] = true;
  for (auto u:g[v]){
    if (u != par && !marked[u])
      dfs(u, v);
  }
}

int32_t main() {
  int t; cin >> t;
  while (t--){
    int n; cin >> n;
    clear(n);
    for (int i = 1; i <= n; i++)
      cin >> f[i];
    for (int i = 1; i <= n; i++)
      cin >> s[i];
    for (int i = 1; i <= n; i++){
      g[f[i]].push_back(s[i]);
      g[s[i]].push_back(f[i]);
    }
    int ans = 1;
    for (int i = 1; i <= n; i++){
      if (!marked[i]){
	//cout << i << endl;
	dfs(i, 0);
	ans = (ans*2)%MOD;
      }
    }
    cout << ans << endl;
  }
  return 0;
}
