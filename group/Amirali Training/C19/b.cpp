#include <bits/stdc++.h>
#define int long long
#define size adfkjadfsdf

using namespace std;

const int M = 2e5+10;
int n, k, dep[M], size[M], ans[M];
vector<int> g[M];

int dfs(int u, int p){
  dep[u] = dep[p]+1;
  size[u] = 1;
  for(auto v:g[u]){
    if (v != p){
      size[u] += dfs(v, u);
    }
  }
  ans[u] = size[u]-dep[u];
  return size[u];
}

int32_t main() {
  cin >> n >> k;
  for (int i = 1; i < n; i++){
    int u, v;
    cin >> u >> v;
    g[u].push_back(v);
    g[v].push_back(u);
  }
  dfs(1, 0);
  sort(ans+1, ans+n+1);
  reverse(ans+1, ans+n+1);
  int lans = 0;
  for (int i = 1; i <= n-k; i++)
    lans += ans[i];
  cout << lans << endl;
  return 0;
}
