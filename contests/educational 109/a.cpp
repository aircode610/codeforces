#include <bits/stdc++.h>
#define int long long

using namespace std;

int32_t main() {
  int t; cin >> t;
  while (t--){
    int k; cin >> k;
    int ans = 100;
    for (int i = 100; i >= 1; i--){
      if (ans % i == 0 && k % i == 0){
	ans /= i;
	k /= i;
      }
    }
    cout << ans << endl;
  }
  return 0;
}
