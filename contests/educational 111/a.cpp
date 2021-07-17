#include <bits/stdc++.h>
#define int long long

using namespace std;

const int M = 2e5+10, INF = 1e9+10;
int t, s;

int32_t main() {
  cin >> t;
  while (t--){
    cin >> s;
    int cnt = 1, a = 3;
    s -= 1;
    while (s > 0){
      s -= a;
      a+=2;
      cnt++;
    }
    cout << cnt << endl;
  }
  return 0;
}
