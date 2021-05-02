#include <bits/stdc++.h>
#define int long long

using namespace std;

int32_t main() {
  int t; cin >> t;
  while (t--){
    int r, b, d;
    cin >> r >> b >> d;
    int mx, mn;
    if (r > b){
      mx = r;
      mn = b;
    }
    else{
      mx = b;
      mn = r;
    }
    if (mx - mn <= d){
      cout << "YES" << endl;
      continue;
    }
    if (mx - (d+1)*mn > 0)
      cout << "NO" << endl;
    else
      cout << "YES" << endl;
  }
  return 0;
}
