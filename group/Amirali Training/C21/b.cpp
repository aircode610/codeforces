#include <bits/stdc++.h>
#define int long long

using namespace std;
const int M = 1e4+10;
int t, n, a[M];
int32_t main() {
  cin >> t;
  while (t--){
    cin >> n;
    for (int i = 1; i <= n; i++)
      cin >> a[i];
    int ans = 0;
    for (int i = 1; i < n; i++){
      if (a[i] == 0 && a[i+1] == 1)
	ans = i;
    }
    if (a[n] == 0)
      ans = n;
    if (a[1] == 1){
      cout << n+1 << endl;
      for (int i = 1; i <= n; i++)
	cout << i << ' ';
      cout << endl;
      continue;
    }
    if (ans == 0)
      cout << -1 << endl;
    else{
      for (int i = 1; i <= ans; i++)
	cout << i << ' ';
      cout << n+1 << ' ';
      for (int i = ans+1; i <= n; i++)
	cout << i << ' ';
      cout << endl;
    }
  }
  return 0;
}
