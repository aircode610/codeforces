#include <bits/stdc++.h>
#define int long long

using namespace std;

int32_t main() {
  int n; cin >> n;
  string str; cin >> str;
  int ans = n*(n-1)/2, cnt=1;
  for (int i = 1; i < str.size(); i++){
    if (str[i] == str[i-1])
      cnt++;
    else{
      //cout << cnt << endl;
      ans -= cnt;
      cnt = 1;
    }
  }
  cnt = 0;
  for (int i = str.size()-2; i >= 0; i--){
    if (str[i] == str[i+1])
      cnt++;
    else{
      //cout << cnt << endl;
      ans -= cnt;
      cnt = 0;
    }
  }
  cout << ans << endl;
  return 0;
}

