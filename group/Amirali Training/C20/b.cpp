#include <bits/stdc++.h>
#define int long long

using namespace std;

const int M = 1e5+10;
int n, cnt[M];
vector<pair<int, int> > g;
int32_t main() {
  cin >> n;
  for (int i = 1; i < n; i++){
    int u, v;
    cin >> u >> v;
    g.push_back({u, v});
    cnt[u]++;
    cnt[v]++;
  }
  int node = 0;
  for (int i = 1; i <= n; i++)
    if (cnt[i] >= 3 && node == 0)
      node = i;
  int cntn = n-2, cnt3 = 0;
  for (int i = 0; i < g.size(); i++){
    int u = g[i].first, v = g[i].second;
    if (u == node && cnt3 != 3)
      cout << cnt3++ << endl;
    else if (v == node && cnt3 != 3)
      cout << cnt3++ << endl;
    else
      cout << cntn-- << endl;
  }
 return 0;
}
