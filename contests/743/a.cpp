#include <bits/stdc++.h>
#define int long long

using namespace std;

const int M = 1e5+10, INF = 1e9+10;

int32_t main() {
  int t; cin >> t;
  while (t--){
    int n; cin >> n;
    int ans = 0;
    string s; cin >> s;
    for (int i = 0; i < s.size(); i++){
      int inp = s[i]-'0';
      if (inp != 0){
	ans += inp;
	ans++;
      }
    }
    if (s[s.size()-1] != '0')
      ans--;
    cout << ans << endl;
  }
  return 0;
}
