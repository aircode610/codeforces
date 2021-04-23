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
    for (int i = 1; i <= n; i++){
      int num = a[i];
      bool s = false;
      for (int j = 1; j <= num; j++)
	if (j * j == num)
	  s = true;
      if (s == false)
	con = false;
    }
    if (con)
      cout << "NO" << endl;
    else
      cout << "YES" << endl;
  }
  return 0;
}
