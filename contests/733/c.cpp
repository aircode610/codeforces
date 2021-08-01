#include <bits/stdc++.h>
#define int long long

using namespace std;
const int M = 1e5+10, INF = 1e9+10;
int t, n, a[M], b[M];
int32_t main() {
  cin >> t;
  while (t--){
    cin >> n;
    for (int i = 1; i <= n; i++)
      cin >> a[i];
    for (int i = 1; i <= n; i++)
      cin >> b[i];
    sort(a+1, a+n+1);
    sort(b+1, b+n+1);
    reverse(a+1, a+n+1);
    reverse(b+1, b+n+1);
    int suma[M], sumb[M];
    suma[0] = sumb[0] = 0;
    for (int i = 1; i <= n; i++)
      suma[i] = suma[i-1] + a[i];
    for (int i = 1; i <= n; i++)
      sumb[i] = sumb[i-1] + b[i];

    int cnt = 0, k = n, sb = 0, sa = 0;
    for (int i = 1; i < M; i++){
      int needed = k-k/4;
      if (needed > n)
	sb = sumb[n];
      else
	sb = sumb[needed];
      //cout << (100*cnt)+suma[needed-cnt] << ' ' << sb << endl;
      if ((100*cnt)+suma[needed-cnt] >= sb){
	cout << cnt << endl;
	break;
      }
      cnt++;
      k++;
    }
  }
  return 0;
}
