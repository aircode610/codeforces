#include <bits/stdc++.h>
#define int long long

using namespace std;

int32_t main() {
  int t; cin >> t;
  while (t--){
    int n, l, r;
    cin >> n >> l >> r;
    int cntl[n+1], cntr[n+1];
    fill(cntl+1, cntl+n+1, 0);
    fill(cntr+1, cntr+n+1, 0);
    for (int i = 1; i <= n; i++){
      int c; cin >> c;
      if (l > r){
	if (i > l)
	  cntr[c]++;
	else
	  cntl[c]++;
      }
      else{
	if (i > l)
	  cntl[c]++;
	else
	  cntr[c]++;
      }
    }
    //cout << cntl[2] << endl;
    //cout << cntr[2] << endl;
    for (int i = 1; i <= n; i++){
      if (cntr[i] >= cntl[i]){
	cntr[i] -= cntl[i];
	cntl[i] = 0;
      }
      else if (cntl[i] >= cntr[i]){
	cntl[i] -= cntr[i];
	cntr[i] = 0;
      }
    }

    int cnt = 0, ans = 0;
    for (int i = 1; i <= n; i++){
      while (cnt[i] > 1 || cnt < l-r){
	cntl[i] -= 2;
	cnt++;
      }
    }
    //cout << cnt << endl;
    ans += cnt;
    cout << ans << endl;
  }
  return 0;
}
