#include <bits/stdc++.h>
#define int long long

using namespace std;

const int INF = 1e5+10;

int32_t main() {
  int t; cin >> t;
  while (t--){
    int n; cin >> n;
    int a[n+1], l=INF, h=0, indl=0, indh=0;
    for (int i = 1; i <= n; i++){
      cin >> a[i];
      if(a[i] < l){
	l = a[i];
	indl = i;
      }
      if (a[i] > h){
	h = a[i];
	indh = i;
      }
    }
    int lb = min(indl, indh);
    int mb = max(indl, indh);
    //cout << lb << ' ' << mb << endl;
    int ans = INF;
    if (mb < ans)
      ans = mb;
    if (n-lb+1 < ans)
      ans = n-lb+1;
    if (lb+(n-mb+1) < ans)
      ans = lb+(n-mb+1);
    cout << ans << endl;
  }
  return 0;
}
