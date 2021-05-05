#include <bits/stdc++.h>
#define int long long

using namespace std;

bool isp(int num){
  int l=1, r=100000, mid;
  while (r-l > 1){
    mid = (l+r)/2;
    //cout << l << ' ' << r << endl;
    if (mid*mid <= num)
      l = mid;
    else
      r = mid;
  }
  if (l*l == num)
    return true;
  return false;
} 

int32_t main() {
  int t; cin >> t;
  while (t--){
    int n; cin >> n;
    if (isp(n/2) && n % 2 == 0)
      cout << "YES" << endl;
    else if (isp(n/4) && n % 4 == 0)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
  return 0;
}
