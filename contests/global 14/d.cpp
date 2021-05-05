#include <bits/stdc++.h>
#define int long long

using namespace std;

int32_t main() {
  int t; cin >> t;
  while (t--){
    int n, l, r;
    cin >> n >> l >> r;
    bool con = false;
    if (l > r)
      con = true;
    else
      con = false;
    int cntl[n+1], cntr[n+1];
    fill(cntl+1, cntl+n+1, 0);
    fill(cntr+1, cntr+n+1, 0);
    for (int i = 1; i <= n; i++){
      int c; cin >> c;
      if (con == false){
	if (i > l)
	  cntl[c]++;
	else
	  cntr[c]++;
      }
      else{
	if (i > l)
	  cntr[c]++;
	else
	  cntl[c]++;
      }
    }
    if (con == false){
      int temp = l;
      l = r;
      r = temp;
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
    vector<pair<int, int> > best;
    for (int i = 1; i <= n; i++){
      if (cntl[i] == 1)
	best.push_back({1, i});
      else if (cntl[i] != 0)
	best.push_back({cntl[i]/2, i});
    }
    sort(best.begin(), best.end());
    reverse(best.begin(), best.end());
    int ans = 0;
    for (int i = 0; i < best.size(); i++){
      //cout << num << ' ' << l << ' ' << r << endl;
      if (r == l)
	break;
      int dif = (l-r)/2;
      if (best[i].first < dif){
	ans += best[i].first;
	cntl[best[i].second] -= best[i].first;
	cntr[best[i].second] += best[i].first;
	r += best[i].first;
	l -= best[i].first;
      }
      else{
	ans += dif;
	cntl[best[i].second] -= dif;
	cntr[best[i].second] += dif;
	r += dif;
	l -= dif;
      }
    }
    //cout << ans << endl;
    int cnt = 0;
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
    for (int i = 1; i <= n; i++){
      if (cntl[i] != 0){
	//cout << cntl[i] << ' ' << i << endl;
	cnt += cntl[i];
      }
    }
    //cout << cnt << endl;
    ans += cnt;
    cout << ans << endl;
  }
  return 0;
}
