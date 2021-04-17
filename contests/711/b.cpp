#include <bits/stdc++.h>
#define int long long

using namespace std;

int loga(int num) {
  int zarb = 1, ret = 0;
  for (int i = 1; i <= num; i++){
    if (zarb == num)
      break;
    zarb *= 2;
    ret++;
  }
  return ret;
}

int pw(int num){
  int ret = 1;
  for (int i = 1; i <= num; i++)
    ret *= 2;
  return ret;
}

int32_t main() {
  int t; cin >> t;
  while (t--){
    int n, W, sumAll=0, ans=0;
    cin >> n >> W;
    int w[30];
    fill(w, w+30, 0);
    for (int i = 1; i <= n; i++){
      int inp; cin >> inp;
      w[loga(inp)]++;
      sumAll += inp;
    }
    while (sumAll != 0){
      int sumN = 0;
      for (int i = 20; i >= 0;){
	if (w[i] > 0 && sumN + pw(i) <= W){
	  //cout << pw(i) << endl;
	  sumN += pw(i);
	  w[i]--;
	}
	else
	  i--;
      }
      sumAll -= sumN;
      //cout << sumAll << endl;
      ans++;
    }
    cout << ans << endl;
  }
  return 0;
}
