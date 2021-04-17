#include <bits/stdc++.h>
#define int long long

using namespace std;

int32_t main() {
  int t; cin >> t;
  while (t--){
    int n; cin >> n;
    vector<int> f, z;
    for (int i = 1; i <= n; i++){
      int inp;
      cin >> inp;
      if (inp % 2 == 0)
	z.push_back(inp);
      else
	f.push_back(inp);
    }
    for (int i = 0; i < z.size(); i++)
      cout << z[i] << ' ';
    for (int i = 0; i < f.size(); i++)
      cout << f[i] << ' ';
    cout << endl;
  }
  return 0;
}
