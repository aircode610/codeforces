#include <bits/stdc++.h>
#define int long long

using namespace std;

int32_t main() {
  int t; cin >> t;
  while (t--){
    int a, b;
    cin >> a >> b;
    if (b == 2)
      b = 4;
    if (a % b == 0){
      cout << "NO" << endl;
      continue;
    }
    int y = a;
    int z = a*(b-1);
    int x = a*b;
    cout << "YES" << endl;
    cout << y << ' ' << z << ' ' << x << endl;
  }
  return 0;
}
