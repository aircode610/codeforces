#include <bits/stdc++.h>
#define int long long

using namespace std;

const int M = 500+10, INF = 1e18;
vector<pair<pair<int, int>, int> > g[M][M];
int dp[M][M], ans, cnt;

void dfs(int x, int y, int px, int py){
  for (auto u:g[x][y]){
    int ux = u.first.first, uy = u.first.second;
    int w = u.second;
    if (ux != px || uy != py){
      dfs(ux, uy, x, y);
      ans = min(ans, dp[x][y]+dp[ux][uy]+w);
      dp[x][y] = min(dp[x][y], dp[ux][uy]);
    }
  }
  dp[x][y] += g[x][y].second;
  ans = min(ans, dp[x][y]);
  cnt++;
}

int32_t main() {
  int n, m, k;
  cin >> n >> m >> k;
  for (int i = 1; i <= n; i++){
    for (int j = 1; j < m; j++){
      int w; cin >> w;
      g[i][j].push_back({{i, j+1}, w});
      g[i][j+1].push_back({{i, j}, w});
    }
  }
  for (int i = 1; i < n; i++){
    for (int j = 1; j <= m; j++){
      int w; cin >> w;
      g[i][j].push_back({{i+1, j}, w});
      g[i+1][j].push_back({{i, j}, w});
    }
  }
  
  //nope :(
  if (k % 2 == 1){
    for (int i = 1; i <= n; i++){
      for (int j = 1; j <= n; j++)
	cout << -1 << ' ';
      cout << endl;
    }
    return 0;
  }

  for (int i = 1; i <= n; i++){
    for (int j = 1; j <= m; j++){
      ans = INF;
      cnt = 0;
      cout << dfs(i, j, 0, 0);
    }
  }
  return 0;
}
