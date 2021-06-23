#include <bits/stdc++.h>
#define int long long

using namespace std;

int dp[60];

int32_t main() {  
  int n, q;
  cin >> n >> q;
  int a[n+1], t[q+1];
  for (int i = 1; i <= n; i++)
    cin >> a[i];
  for (int i = 1; i <= q; i++)
    cin >> t[i];

  for (int i = 1; i <= n; i++)
    if (dp[a[i]] == 0)
      dp[a[i]] = i;
  vector<int> ans;
  for (int i = 1; i <= q; i++){
    ans.push_back(dp[t[i]]);
    for (int j = 1; j <= 50; j++)
      if (dp[j] < dp[t[i]])
	dp[j]++;
    dp[t[i]] = 1;
  }
  for (int i = 0; i < ans.size(); i++)
    cout << ans[i] << ' ';
  cout << endl;
  return 0;
}
