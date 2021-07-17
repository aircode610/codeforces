#include <bits/stdc++.h>
#define int long long
#define y1 dklsjfa

using namespace std;

const int M = 1e5+10;
int t, x1, y1, x2, y2;

int32_t main() {
  cin >> t;
  while (t--){
    cin >> x1 >> y1 >> x2 >> y2;
    cout << (x2-x1)*(y2-y1)+1 << endl;
  }
  return 0;
}
