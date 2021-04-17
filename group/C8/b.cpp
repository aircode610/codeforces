#include <bits/stdc++.h>
#define int long long

using namespace std;

int32_t main() {
  int t; cin >> t;
  while (t--){
    int n; cin >> n;
    int a[n+1], dif[n+1], last[n+1], ans[n+1];
    fill(ans, ans+n+1, -1);
    fill(dif, dif+n+1, 0);
    fill(last, last+n+1, 0);
    for (int i = 1; i <= n; i++)
      cin >> a[i];
    for (int i = 1; i <= n; i++){
      int now = a[i];
      dif[now] = max(dif[now], i-last[now]);
      last[now] = i;
      //cout << now << ' ' << dif[now] << endl;
    }
    for (int i = 1; i <= n; i++){
      dif[i] = max(dif[i], n-last[i]+1);
      for (int j = dif[i]; j <= n && ans[j] == -1; j++)
	ans[j] = i;
    }
    for (int i = 1; i <= n; i++){
      cout << ans[i] << ' ';
    }
    cout << endl;
  }
  return 0;
}
