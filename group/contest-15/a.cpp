#include<bits/stdc++.h>
#define int unsigned long long

using namespace std;

const int M=777+10;

int32_t main() {
  int n; cin >> n;
  int ans = 0;
  ans+=n / 1 * (n - 1) / 2 * (n - 2) / 3 * (n - 3) / 4 * (n - 4) / 5 * (n - 5) / 6 * (n - 6) / 7;
  ans+=n / 1 * (n - 1) / 2 * (n - 2) / 3 * (n - 3) / 4 * (n - 4) / 5 * (n - 5) / 6;
  ans+=n / 1 * (n - 1) / 2 * (n - 2) / 3 * (n - 3) / 4 * (n - 4) / 5;
  cout << ans << endl;
  return 0;
}
