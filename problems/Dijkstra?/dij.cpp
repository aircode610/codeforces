#include <bits/stdc++.h>

using namespace std;

const int M = 1e6+10, INF = 1e17;

vector<pair<int, int> > g[M];
set<pair<int, int> > s;
int dis[M], par[M];
deque<int> ans;
bool mark[M];

void dijkstra(int r){
  fill(dis, dis+M, INF);
  dis[r] = 0;
  s.insert({dis[r], r});
  while (s.size()){
    int v = (*s.begin()).second;
    s.erase(*s.begin());
    mark[v] = true;
    for (auto p:g[v]){
      int u = p.first;
      int w = p.second;
      if (!mark[u]){
	s.erase({dis[u], u});
	if (dis[v] + w < dis[u]){
	  dis[u] = dis[v] + w;
	  par[u] = v;
	}
	s.insert({dis[u], u});
      }
    }
  }
}

int main() {

  int n, m;
  cin >> n >> m;

  for (int i = 1; i <= m; i++){
    int u, v, w;
    cin >> u >> v >> w;
    g[u].push_back({v, w});
    g[v].push_back({u, w});
  }
  fill(par, par+M, 0);
  par[1] = 0;
  dijkstra(1);

  int u = n;
  while (u != 0){
    ans.push_front(u);
    u = par[u];
  }
  if (ans[0] == 1){
    for (int i = 0; i < ans.size(); i++){
      cout << ans[i] << ' ';
    }
    cout << endl;
  }
  else
    cout << -1 << endl;
  return 0;
}
