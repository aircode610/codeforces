#include <bits/stdc++.h>
#define int long long

using namespace std;

const int M = 1e5+10, INF = 1e9;
int a[M], dp[M];

void clear(int n){
  fill(a+1, a+n+1, 0);
  fill(dp+1, dp+n+1, 0);
}

int32_t main() {
  int t; cin >> t;
  while (t--){
    int n, p, k;
    cin >> n >> p >> k;
    clear(n);
    for (int i = 1; i <= n; i++){
      char inp; cin >> inp;
      a[i] = inp-'0';
    }
    int x, y;
    cin >> x >> y;
    for (int i = n; i >= 1; i--){
      if (i+k > n){
	dp[i] = 1-a[i];
	continue;
      }
      dp[i] = dp[i+k]+(1-a[i]);
    }
    int ans = INF;
    for (int i = p; i <= n; i++)
      ans = min(ans, ((i-p)*y)+(dp[i]*x));
    cout << ans << endl;
  }
  return 0;
}
