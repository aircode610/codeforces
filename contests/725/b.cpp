#include <bits/stdc++.h>
#define int long long

using namespace std;

int32_t main() {
  int t; cin >> t;
  while (t--){
    int n; cin >> n;
    int a[n+1], ans = 0, s = 0;
    for (int i = 1; i <= n; i++){
      cin >> a[i];
      s += a[i];
    }
    if (s % n != 0){
      cout << -1 << endl;
      continue;
    }
    int dis = s/n, need = 0;
    for (int i = 1; i <= n; i++)
      if (a[i] < dis)
	need += dis-a[i];
    sort(a+1, a+n+1);
    reverse(a+1, a+n+1);
    int have = 0;
    for (int i = 1; i <= n; i++){
      if (have >= need)
	break;
      else
	have += a[i]-dis;
      ans++;
    }
    cout << ans << endl;
  }
  return 0;
}
