#include <bits/stdc++.h>
#define int long long

using namespace std;
const int M = 2e5+10, INF = 1e9+10;

int32_t main() {
  int t; cin >> t;
  while (t--){
    string n;
    cin >> n;
    int ans = 0;
    for (int i = 0; i < n.size(); i++){
      int d = n[i]-'0';
      ans = max(ans, d);
    }
    cout << ans << endl;
  }
  return 0;
}
