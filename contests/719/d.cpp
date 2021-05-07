#include <bits/stdc++.h>
#define int long long

using namespace std;

int32_t main() {
  int t; cin >> t;
  while (t--){
    int n; cin >> n;
    int cnt[n+1], cnt2[n+1], ans=0;
    fill(cnt, cnt+n+1, 0);
    fill(cnt2, cnt2+n+1, 0);
    for (int i = 1; i <= n; i++){
      int inp; cin >> inp;
      if (inp - i < 0){
	cnt2[i-inp]++;
	//cout << i-inp << endl;
      }
      else{
	cnt[inp-i]++;
	//cout << cnt[inp-i] << endl;
      }
    }
    for (int i = 0; i <= n; i++){
      int tmp = 1;
      if (cnt[i] > 1){
	ans += cnt[i]*(cnt[i]-1)/2;
	//cout << ans << endl;
      }
      if (cnt2[i] > 1)
	ans += cnt2[i]*(cnt2[i]-1)/2;
    }
    cout << ans << endl;
  }
  return 0;
}
