#include <bits/stdc++.h>
#define int long long

using namespace std;

int32_t main() {
  int t; cin >> t;
  while (t--){
    int n; cin >> n;
    int a[n+1];
    bool dorost = true;
    for (int i = 1; i <= n; i++){
      cin >> a[i];
      if (a[i] != i)
	dorost = false;
    }
    if (dorost == true)
      cout << 0 << endl;
    else if (a[1] == 1 || a[n] == n)
      cout << 1 << endl;
    else if (a[1] == n && a[n] == 1)
      cout << 3 << endl;
    else
      cout << 2 << endl;
  }
  return 0;
}
