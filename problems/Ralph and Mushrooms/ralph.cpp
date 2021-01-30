#include <bits/stdc++.h>
#define int long long
#define FAST ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

using namespace std;

const int M = 1e6+10;
int n, m, start, col[M], dp[M], mushrooms[M];
vector<int> s;
vector<pair<int, int> > g[M], gr[M], d[M];
bool mark[M], mark2[M], del[M];

void dfs1(int v){
  mark[v] = true;
  for (auto u:g[v])
    if (!mark[u.first])
      dfs1(u.first);
  s.push_back(v);
}

void dfs2(int v, int c){
  del[v] = true;
  col[v] = c;
  for (auto u:gr[v])
    if (!del[u.first])
      dfs2(u.first, c);
}

int mem(int v)
{
  if(mark2[v])
    return dp[v];
  mark2[v]=true;
  for(auto u:d[v])
    dp[v]=max(mem(u.first)+u.second,dp[v]);
  dp[v] += mushrooms[v];
  return dp[v];
}

int32_t main(){
  FAST;
  cin >> n >> m ;
  for (int i = 1; i <= m; i++){
    int u, v, w;
    cin >> u >> v >> w;
    g[u].push_back({v, w});
    gr[v].push_back({u, w});
  }
  cin >> start;
  
  for (int i = 1; i <= n; i++)
    if (!mark[i])
      dfs1(i);

  int c = 0;
  for (int i = s.size()-1; i >= 0; i--){
    if (!del[s[i]])
      dfs2(s[i], ++c);
  }

  for (int v = 1; v <= n; v++){
    for (auto u:g[v]){
      if (col[v] != col[u.first])
	d[col[v]].push_back({col[u.first], u.second});      
      else{
	int num = u.second, l = 0, r = num+1, mid;
	while (r-l > 1){
	  mid = (r+l)/2;
	  if (mid*(mid+1)/2 <= num)
	    l = mid;
	  else
	    r = mid;
	}
	mushrooms[col[v]] += (num*(l+1)-(l*(l+1)*(l+2)/6));
      }
    }
  }  
  int ans = mem(col[start]);
  cout << ans << endl;
  
  return 0;
}
