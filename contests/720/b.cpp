#include <bits/stdc++.h>
#define int long long

using namespace std;

const int INF = 1e9+10;

int32_t main() {
  int t; cin >> t;
  while (t--){
    int n; cin >> n;
    int a[n+1], m=-1, mn = INF;
    for (int i = 1; i <= n; i++){
      cin >> a[i];
      if (a[i] < mn){
	mn = a[i];
	m = i;
      }
    }
    if (n % mn == 0)
      cout << n << endl;
    else
      cout << n-1 << endl;
    int marked[n+1];
    int num = 3;
    fill(marked, marked+n+1, 0);
    for (int i = 1; i <= n; i++){
      if (i == mn || marked[i] == 1)
	continue;
      cout << i << ' ' << m << ' ' << mn << ' ' << m+mn << endl;
      marked[m] = 1;
      m = i;
      num += 2;
    }
    if (n % mn == 0){
      cout << n << ' ' << n-1 << ' ' << n+mn+1 << ' ' << mn << endl;
    }
  }
  return 0;
}
