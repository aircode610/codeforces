#include <bits/stdc++.h>
#define int long long

using namespace std;

const int M = 2e5+10;

int32_t main() {
  int t; cin >> t;
  while (t--){
    int n, W;
    cin >> n >> W;
    pair<int, int> w[n+1];
    for (int i = 1; i <= n; i++){
      int inp; cin >> inp;
      w[i] = {inp, i};
    }
    sort(w+1, w+n+1);
    reverse(w+1, w+n+1);
    int sumA = 0, half = (W+1)/2, con = -1;
    vector<int> ans;
    for (int i = 1; i <= n; i++){
      if (w[i].first > W)
	continue;
      sumA += w[i].first;
      ans.push_back(w[i].second);
      if (sumA >= half && sumA <= W){
	con = ans.size();
	break;
      }
    }
    if (con != -1){
      cout << ans.size() << endl;
      for (int i = 0; i < ans.size(); i++)
	cout << ans[i] << ' ';
      cout << endl;
    }
    else
      cout << -1 << endl;
  }
  return 0;
}
