#include <bits/stdc++.h>
#define int long long

using namespace std;

int32_t main() {
  int t; cin >> t;
  while (t--){
    int n; cin >> n;
    int a[n+1];
    for (int i = 1; i <= n; i++)
      cin >> a[i];
    bool con = true;
    for (int i = 2; i <= n; i++)
      if (a[i] != a[1])
	con = false;
    if (con == true){
      cout << "YES" << endl;
      continue;
    }
    int x = 0;
    for (int i = 1; i <= n; i++){
      x ^= a[i];
    }
    if (x == 0)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
  return 0;
}
