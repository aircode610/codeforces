#include <bits/stdc++.h>
#define int long long

using namespace std;

const int M = 1e5+10, INF = -1e9;
int t, n, a[M];

int32_t main() {
  cin >> t;
  while (t--){
    cin >> n;
    for (int i = 1; i <= n; i++)
      cin >> a[i];
    int mx = INF, mxdif = INF;
    for (int i = 1; i <= n; i++){
      mx = max(mx, a[i]);
      mxdif = max(mxdif, mx-a[i]);
    }
    int ans =  log2(mxdif);
    if (mxdif != 0)
      cout << ans+1 << endl;
    else
      cout << 0 << endl;
  }
  return 0;
}
