#include <bits/stdc++.h>
#define int long long

using namespace std;

const int M = 1e5+10;
int t, n, a, b;

int32_t main() {
  cin >> t;
  while (t--){
    cin >> n >> a >> b;
    int rem = n % a;
    if (rem % b == 0 || rem < b)
      cout << "Yes" << endl;
    else
      cout << "No" << endl;
  }
  return 0;
}
