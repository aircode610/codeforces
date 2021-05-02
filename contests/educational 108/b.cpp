#include <bits/stdc++.h>
#define int long long

using namespace std;

int32_t main() {
  int t; cin >> t;
  while (t--){
    int n, m, k;
    cin >> n >> m >> k;
    int ans = n-1+(m-1)*n;
    if (k == ans)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
  return 0;
}
