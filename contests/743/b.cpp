#include <bits/stdc++.h>
#define int long long

using namespace std;

const int M = 1e6+10, INF = 1e9+10;
int t, n, a[M], b[M], disb[M];
int32_t main() {
  cin >> t;
  while (t--){
    cin >> n;
    for (int i = 1; i <= n; i++)
      cin >> a[i];
    for (int i = 1; i <= n; i++)
      cin >> b[i];

    for (int i = 1; i <= n; i++)
      disb[b[i]/2] = i-1;

    int minD = disb[n];
    for (int i = n-1; i >= 1; i--){
      if (disb[i] < minD)
	minD = disb[i];
      else
	disb[i] = minD;
    }

    int ans = INF;
    for (int i = 1; i <= n; i++){
      ans = min(ans, i-1+disb[a[i]/2+1]);
    }
    cout << ans << endl;
    for (int i = 1; i <= n; i++)
      cout << disb[i] << ' ';
    cout << endl;
  }
  return 0;
}
