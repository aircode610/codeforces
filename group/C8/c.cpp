#include <bits/stdc++.h>
#define int long long

using namespace std;

int query(int a, int b){
  cout << "? " << a+1 << ' ' << b+1 << endl;
  int ret; cin >> ret;
  return ret;
}

int32_t main() {
  int n; cin >> n;
  int mx = 0, ans[n];
  for (int i = 1; i < n; i++){
    int a = query(mx, i);
    int b = query(i, mx);
    if (a > b){
      ans[mx] = a;
      mx = i;
    }
    else
      ans[i] = b;
  }
  ans[mx] = n;
  cout << "! ";
  for (int i = 0; i < n; i++)
    cout << ans[i] << ' ';
  cout << endl;
  return 0;
}
