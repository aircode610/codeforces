#include <bits/stdc++.h>
#define int long long

using namespace std;

const int M = 1e5+10, INF = 1e9+10;
int n, dp[M], minC=INF, cent1, cent2, par[M], leaf;
vector<int> g[M];

void clear(){
  cent1 = cent2 = 0;
  minC = INF;
  for (int i = 1; i <= n; i++){
    g[i].clear();
    par[i] = 0;
  }
}

void findCents(int node, int p){
  par[node] = p;
  dp[node] = 1;
  int maxC = 0;
  for (int c:g[node]){
    if (c == p)
      continue;
    findCents(c, node);
    dp[node] += dp[c];
    maxC = max(maxC, dp[c]);
  }
  //cout << node << ' ' << n-dp[node] << ' ' << n << endl;
  maxC = max(maxC, n-dp[node]);
  if (maxC < minC){
    minC = maxC;
    cent1 = node;
    cent2 = 0;
  }
  else if (maxC == minC)
    cent2 = node;
}

void findEdge(int node, int p){
  if (g[node].size() == 1){
    leaf = node;
    return ;
  }
  for (int c:g[node]){
    if (c == p)
      continue;
    findEdge(c, node);
  }
}

int32_t main() {
  int t; cin >> t;
  while (t--){
    cin >> n;
    clear();
    for (int i = 1; i < n; i++){
      int x, y;
      cin >> x >> y;
      g[x].push_back(y);
      g[y].push_back(x);
    }
    findCents(1, 0);
    //cout << cent1 << ' ' << cent2 << endl;
    if (cent2 == 0){
      cout << 1 << ' ' << g[1][0] << endl;
      cout << 1 << ' ' <<  g[1][0] << endl;
      continue;
    }
    if (par[cent1] != cent2)
      swap(cent1, cent2);
    findEdge(cent1, cent2);
    cout << leaf << ' ' << par[leaf] << endl;
    cout << leaf << ' ' << cent2 << endl;
  }
  return 0;
}
