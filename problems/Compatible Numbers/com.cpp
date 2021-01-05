#include <bits/stdc++.h>
#define int long long

using namespace std;

const int M = 5e6 + 10;
int a[M], dp[M];

int32_t main() {

  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  
  int n; cin >> n;
  fill(dp, dp+M, -1);
  for (int i = 1; i <= n; i++){
    cin >> a[i];
    dp[a[i]] = a[i];
  }

  for (int mask = 0; mask < (1<<22); mask++){
    int x = mask;    
    while(x){
      int i = (~(x-1))&x;
      dp[mask] = max(dp[mask], dp[i^mask]);
      x -= i;
    }
  }

  for (int i = 1; i <= n; i++){
    //a[i]^(1<<j)
    cout << dp[(a[i]^((1<<22)-1))] << " ";
  }
  
  return 0;
}
