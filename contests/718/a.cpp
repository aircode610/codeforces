#include <bits/stdc++.h>
#define int long long

using namespace std;

int32_t main() {
  int t; cin >> t;
  while (t--){
    int n; cin >> n;
    int cnt = 0;
    for (int i = 18; i >= 0; i--){
      int a = 2050;
      for (int j = 1; j <= i; j++)
	a *= 10;
      while (n >= a){
	n -= a;
	cnt++;
      }
    }
    if (n == 0)
      cout << cnt << endl;
    else
      cout << -1 << endl;
  }
  return 0;
}
