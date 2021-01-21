#include <bits/stdc++.h>
#define int long long

using namespace std;

const int M = 1000+10;
int n, m, k, a[M][M], w[M][M], dsu[M][M], sumAll;
vector<pair<int, pair<int, int> > > stacks;
pair<int, int> par[M][M];
pair<int, int> dir[4] = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
bool mark[M][M];

pair<int, int> root(pair<int, int> u){
  if (par[u.first][u.second] == u)
    return u;
  return par[u.first][u.second]=root(par[u.first][u.second]);
}

void join (pair<int, int> u, pair<int, int> v){
  pair<int, int> ru = root(u), rv = root(v);
  if (ru == rv)
    return ;
  par[ru.first][ru.second] = rv;
  w[rv.first][rv.second] += w[ru.first][ru.second];
}

void dfs(int x, int y, int val){
  if (sumAll != k)
    mark[x][y] = true;
  for (int i = 0; i < 4; i++){
    int xd = x+dir[i].first, yd = y+dir[i].second;
    if (!mark[xd][yd] && a[xd][yd] >= val && sumAll != k){
      sumAll += val;
      dfs(xd, yd, val);
    }
  }
}

int32_t main(){
  cin >> n >> m >> k;
  
  for (int i = 1; i <= n; i++){
    for (int j = 1; j <= m; j++){
      cin >> a[i][j];
      par[i][j] = {i, j};
      stacks.push_back({a[i][j], {i, j}});
      w[i][j] = 1;
    }
  }
  sort(stacks.begin(), stacks.end());
  reverse(stacks.begin(), stacks.end());
  for (int i = 0; i < stacks.size(); i++){
    int val = stacks[i].first;
    int x = stacks[i].second.first, y = stacks[i].second.second;
    dsu[x][y] = val;
    for (int i = 0; i < 4; i++){
      int xd = x+dir[i].first, yd = y+dir[i].second;
      if (dsu[xd][yd] != 0)
	join({xd, yd}, {x, y});
    }
    if (k % val == 0 && w[x][y] >= k/val){
      sumAll = 0;
      dfs(x, y, val);
      cout << "YES" << endl;
      for (int i = 1; i <= n; i++){
	for (int j = 1; j <= m; j++){
	  if (mark[i][j])
	    cout << val << ' ';
	  else
	    cout << 0 << ' ' ;
	}
	cout << endl;
      }
      return 0;
    }
  }
  cout << "NO" << endl;
  return 0;
}
