#include <bits/stdc++.h>
#define int long long

using namespace std;

const int M = 1e5+10,  INF = 1e9+10;
int t, n, d[M];

int32_t main() {
  cin >> t;
  while (t--){
    cin >> n;
    for (int i = 1; i <= n; i++)
      cin >> d[i];
    sort(d+1, d+n+1);
    int ans = 0, sum = 0;
    for (int i = 1; i <= n; i++){
      ans += -1*((i-1)*d[i]-sum);
      sum += d[i];
    }
    ans += d[n];
    cout << ans << endl;
  }
  return 0;
}
