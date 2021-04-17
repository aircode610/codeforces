#include <bits/stdc++.h>
#define int long long

using namespace std;

const int INF = -1e9;

int32_t main() {
  int t; cin >> t;
  while (t--){
    int n, q;
    cin >> n >> q;
    int a[n+1], dp1[n+1], dp2[n+1];
    dp2[0] = a[0] = 0;
    dp1[0] = INF;
    for (int i = 1; i <= n; i++)
      cin >> a[i];
    for (int i = 1; i <= n; i++){
      dp1[i] = max(dp1[i-1], dp2[i-1]+a[i]);
      dp2[i] = max(dp2[i-1], dp1[i-1]-a[i]);
    }
    cout << max(dp1[n], dp2[n]) << endl;
  }
  return 0;
}
