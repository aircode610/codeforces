#include <bits/stdc++.h>
#define int long long

using namespace std;

const int M = 2e5+10, INF = 1e9+10;

int32_t main() {
  int t; cin >> t;
  while (t--){
    int n; cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++)
      cin >> a[i];
    for (int i = 0; i < n; i++)
      cin >> b[i];
    
    vector<pair<int, int> > all;
    for (int i = 0; i < n; i++)
      all.push_back({a[i], b[i]});
    sort(all.begin(), all.end());

    int dp[n+1];
    dp[n] = 0;
    for (int i = n-1; i >= 0; i--)
      dp[i] = dp[i+1]+all[i].second;
    
    int ans = dp[0];
    for (int i = 0; i < n; i++){
      //cout << all[i].first << ' ' << dp[i+1] << endl;
      ans = min(ans, max(all[i].first, dp[i+1]));
    }
    
    cout << ans << endl;
  }
  return 0;
}
