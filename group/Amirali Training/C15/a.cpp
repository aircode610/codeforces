#include <bits/stdc++.h>
#define int long long

using namespace std;

int t, a, b, n, m;

int32_t main() {
  cin >> t;
  while (t--){
    cin >> a >> b >> n >> m;
    if (a+b < n+m){
      cout << "No" << endl;
      continue;
    }
    if (min(a, b) >= m)
      cout << "Yes" << endl;
    else
      cout << "No" << endl;
  }
  return 0;
}
