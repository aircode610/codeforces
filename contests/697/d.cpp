#include <bits/stdc++.h>
#define int long long
 
using namespace std;
 
const int M = 2e5+10, INF=1e9;
 
int ans, n, m, c[M], w[M], t;
 
int solve(){
  cin >> n >> m;
  vector<int> a, b;
  for (int i = 1; i <= n; i++)
    cin >> w[i];
  for (int i = 1; i <= n; i++){
    cin >> c[i];
    if (c[i] == 1)
      a.push_back(w[i]);
    else
      b.push_back(w[i]);
  }
  sort(a.rbegin(), a.rend());
  sort(b.rbegin(), b.rend());
  vector<int> dpa, dpb;
  dpa.push_back(0);
  for (int i = 1; i <= a.size(); i++)
      dpa.push_back(dpa[i-1]+a[i-1]);
  dpb.push_back(0);
  for (int i = 1; i <= b.size(); i++)
    dpb.push_back(dpb[i-1]+b[i-1]);
  int ans = INF;
  for(int i = 0; i <= b.size(); i++){
    int imp = i*2, l=0, r=a.size(),mid;
    while (r-l > 1){
      mid = (r+l)/2;
      if (dpa[mid]+dpb[i] <= m)
	l = mid;
      else
	r = mid;
    }
    if (dpa[l] + dpb[i] >= m)
      ans = min(ans, imp+l);
    if (dpa[r] + dpb[i] >= m)
      ans = min(ans, imp+r);
  }
  if (ans != INF)
    return ans;
  return -1;
}
 
int32_t main() {
  cin >> t;
  while (t--)    
    cout << solve() << endl;
  return 0;
}
