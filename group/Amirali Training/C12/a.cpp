#include <bits/stdc++.h>
#define int long long

using namespace std;

const int M = 1e5+10;
int t, n, ans, a[M], s[M];

int32_t main() {
  cin >> t;
  while (t--){
    ans = true;
    cin >> n;
    for (int i = 1; i <= n; i++){
      cin >> a[i];
      s[i] = a[i];
    }
    sort(s+1, s+n+1);
    int m = s[1];
    for (int i = 1; i <= n; i++){
      if (s[i] == a[i])
	continue;
      else if (__gcd(s[i], m) == m && __gcd(a[i], m) == m)
	continue;
      else
	ans = false;
    }
    if (ans)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
  return 0;
}
