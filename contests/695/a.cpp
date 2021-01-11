#include <bits/stdc++.h>
#define int long long

using namespace std;

int32_t main() {

  int t; cin >> t;

  while (t--){
    int n; cin >> n;
    vector<int> ans;
    ans.push_back(9);
    int cnt=2, num=8;
    while (cnt <= n){
      ans.push_back(num++);
      if (num == 10)
	num = 0;
      cnt++;
    }
    for (int i = 0; i < ans.size(); i++)
      cout << ans[i];
    cout << endl;
  }
  
  return 0;
}
