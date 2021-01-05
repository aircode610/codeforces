#include <bits/stdc++.h>
#define int long long

using namespace std;

bool cal(int w, int h, int n){
  int ans = 1;
  while (w % 2 == 0 || h % 2 == 0){
    if (w % 2 == 0){
      ans *= 2;
      w /= 2;
    }
    else if (h % 2 == 0){
      ans *= 2;
      h /= 2;
    }
  }
  if (ans >= n)
    return true;
  return false;
}

int32_t main() {
  int t; cin >> t;

  while (t--){
    int w, h, n;
    cin >> w >> h >> n;
    if (cal(w,h,n))
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
  
  return 0;
}
