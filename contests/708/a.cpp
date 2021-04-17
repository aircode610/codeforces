#include <bits/stdc++.h>

using namespace std;

const int M = 100+10;
int a[M];

void solve() {
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++)
    cin >> a[i];
  a[0] = -1;
  sort(a, a+n+1);
  vector<int> ans, ezaf;
  for (int i = 1; i <= n; i++){
    if (a[i] != a[i-1])
      ans.push_back(a[i]);
    else
      ezaf.push_back(a[i]);
  }
  for (int i = 0; i < ans.size(); i++)
    cout << ans[i] << ' ';
  for (int i = ezaf.size()-1; i >= 0; i--)
    cout << ezaf[i] << ' ';
  cout << endl;
}

int main() {
  int t;
  cin >> t;
  while (t--){
    solve();
  }
  return 0;
}
