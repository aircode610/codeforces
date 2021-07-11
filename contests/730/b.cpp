#include <bits/stdc++.h>
#define int long long

using namespace std;

const int M = 2e5+10, INF = 1e9+10;
int t, n, a[M];

int32_t main() {
  cin >> t;
  while (t--){
    cin >> n;
    int s = 0;
    for (int i = 1; i <= n; i++){
      cin >> a[i];
      s += a[i];
    }
    int ans = (s % n)*(n-(s%n));
    cout << ans << endl;
  }
  return 0;
}
