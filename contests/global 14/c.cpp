#include <bits/stdc++.h>
#define int long long

using namespace std;

const int M = 1e5+10, INF = 1e5+10;
int h[M];

int32_t main() {
  int t; cin >> t;
  while (t--){
    int n, m, x;
    cin >> n >> m >> x;
    fill(h+1, h+n+1, 0);
    for (int i = 1; i <= n; i++)
      cin >> h[i];
    int ans[n+1], towers[m+1];
    fill(towers+1, towers+m+1, 0);
    vector<pair<int , int> > blocks;
    blocks.push_back({-1, -1});
    for (int i = 1; i <= n; i++)
      blocks.push_back({h[i], i});
    sort(blocks.begin(), blocks.end());
    int cnt = 1;
    for (int i = 1; i <= n; i++){
      //cout << blocks[i].first << ' ' << cnt << endl;
      towers[cnt] += blocks[i].first;
      ans[blocks[i].second] = cnt;
      if (cnt == m)
	cnt = 1;
      else
	cnt++;
    }
    sort(towers+1, towers+m+1);
    bool con = true;
    for (int i = 2; i <= m; i++){
      //cout << towers[i] << ' ' << i << endl;
      if (towers[i] - towers[i-1] > x){
	con = false;
      }
    }
    if (!con){
      cout << "NO" << endl;
      continue;
    }
    else
      cout << "YES" << endl;
    for (int i = 1; i <= n; i++)
      cout << ans[i] << ' ';
    cout << endl;
  }
  return 0;
}
/*
4 3 3
1 1 2 3
 */
