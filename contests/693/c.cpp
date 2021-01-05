#include <bits/stdc++.h>
#define int long long

using namespace std;

const int M = 2e5 + 10;
int ans = 0, dp[M];

int cal(int n){
  int a[n+1];
  for (int i = 1; i <= n; i++)
    cin >> a[i];
  for (int i = n; i >= 1; i--){
    if (i+a[i] <= n)
      dp[i] = dp[i+a[i]]+a[i];
    else
      dp[i] = a[i];
  }
  for (int i = 1; i <= n; i++){
    ans = max(ans, dp[i]);
  }
  return ans;
}

int32_t main() {
  int t; cin >> t;

  while (t--){
    int n; cin >> n;
    cout << cal(n) << endl;
    ans = 0;
  }
  
  return 0;
}
