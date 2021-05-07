#include <bits/stdc++.h>
#define int long long

using namespace std;

int32_t main() {
  int t; cin >> t;
  while (t--){
    int n; cin >> n;
    int cnt = 0, ans = 0, tmp = n;
    vector<int> dig;
    while (n != 0){
      dig.push_back(n%10);
      n /= 10;
      cnt++;
    }
    reverse(dig.begin(), dig.end());
    int first = dig[0], num = 0;
    ans = (cnt-1)*9;
    bool con = true;
    for (int i = 1; i <= cnt; i++)
      num = (num*10)+first;
    //cout << num << endl;
    if (tmp >= num){
      ans += dig[0];
    }
    else {
      ans += dig[0]-1;
    }
    cout << ans << endl;
  }
  return 0;
}
