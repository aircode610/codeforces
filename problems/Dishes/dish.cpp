#include <bits/stdc++.h>
#define int long long

using namespace std;

const int M=3e5+10;

int dp[M][20], ans, a[20], rules[20][20];

int32_t main() {

  int n, m, k;
  cin >> n >> m >> k;

  for (int i = 0; i < n; i++){
    cin >> a[i];
  }

  for (int i = 1; i <= k; i++){
    int x, y, c;
    cin >> x >> y >> c;
    rules[--x][--y] = c;
  }

  for (int mask = 1; mask < (1<<n); mask++){
    for (int last = 0; last < n; last++){
      if (mask == (1<<last))
	dp[mask][last] = a[last];
      if (mask&(1<<last)){
	for (int bef = 0; bef < n; bef++){
	  if((mask&(1<<bef)) && bef != last){
	    dp[mask][last] = max(dp[mask][last], rules[bef][last] + dp[mask^(1<<last)][bef] + a[last]);
	  }
	}
      }
      if (__builtin_popcount(mask) == m)
	ans = max(ans, dp[mask][last]);
    }
  }

  cout << ans << endl;
  
  return 0;
}
