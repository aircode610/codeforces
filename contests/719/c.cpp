#include <bits/stdc++.h>
#define int long long

using namespace std;

int32_t main() {
  int t; cin >> t;
  while (t--){
    int n; cin >> n;
    if (n == 2)
      cout << -1 << endl;
    else {
      vector<int> all;
      all.push_back(0);
      for (int i = 1; i <= n*n; i++)
	if (i % 2 == 0)
	  all.push_back(i);
      for (int i = 1; i <= n*n; i++)
	if (i % 2 == 1)
	  all.push_back(i);
      for (int i = 1; i <= n*n; i++){
	cout << all[i] << ' ';
	if (i % n == 0)
	  cout << endl;
      }
    }
  }
  return 0;
}
