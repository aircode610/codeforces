#include <bits/stdc++.h>
#define int long long

using namespace std;

const int M = 1000+10;
int t, n, x;

int32_t main() {
  cin >> t;
  while (t--){
    vector<int> g[M];
    cin >> n >> x;
    for (int i = 1; i < n; i++){
      int u, v;
      cin >> u >> v;
      g[u].push_back(v);
      g[v].push_back(u);
    }
    if (g[x].size() == 1 || g[x].size() == 0 || n % 2 == 0)
      cout << "Ayush" << endl;
    else
      cout << "Ashish" << endl;
  }
  return 0;
}
