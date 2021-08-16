#include <bits/stdc++.h>
#define int long long

using namespace std;
const int M = 2e5+10;
int n, m, q, edges[M], weaker[M];
int32_t main() {
  cin >> n >> m;
  for (int i = 1; i <= m; i++){
    int u, v;
    cin >> u >> v;
    edges[u]++;
    edges[v]++;
    weaker[max(u, v)]++;
  }
  int ans = 0;
  for (int i = 1; i <= n; i++)
    if (edges[i] == weaker[i])
      ans++;
  cin >> q;
  while (q--){
    int type;
    cin >> type;
    if (type == 1){
      int u, v;
      cin >> u >> v;
      if (edges[min(u, v)] == weaker[min(u, v)])
	ans--;	
      edges[u]++;
      edges[v]++;
      weaker[max(u, v)]++;
    }
    else if (type == 2){
      int u, v;
      cin >> u >> v;
      edges[u]--;
      edges[v]--;
      if (edges[min(u, v)] == weaker[min(u, v)])
	ans++;
      weaker[max(u, v)]--;
    }
    else
      cout << ans << endl;
  }
  return 0;
}
