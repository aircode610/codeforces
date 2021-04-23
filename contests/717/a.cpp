#include <bits/stdc++.h>
#define int long long
 
using namespace std;
 
int32_t main() {
  int t; cin >> t;
  while (t--){
    int n, k;
    cin >> n >> k;
    int a[n+1];
    for (int i = 1; i <= n; i++)
      cin >> a[i];
    for (int i = 1; i < n; i++){
      if (k >= a[i]){
	k -= a[i];
	a[n] += a[i];
	a[i] = 0;	
      }
      else {
	a[n] += k;
	a[i] -= k;
	k = 0;
      }
      if (k == 0)
	break;
    }
    for (int i = 1; i <= n; i++)
      cout << a[i] << ' ';
    cout << endl;
  }
  return 0;
}
