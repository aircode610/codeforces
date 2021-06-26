#include <bits/stdc++.h>
#define int long long

using namespace std;

const int M = 1e6+10, MOD = 1e9+7;

int n, fac[M], two[M];

void prec(){
  fac[0] = 1, two[0] = 1;
  for (int i = 1; i <= M; i++){
    fac[i] = (fac[i-1]*i)%MOD;
    two[i] = (two[i-1]*2)%MOD;
  }
}

int32_t main() {
  prec();
  cin >> n;
  int ans = fac[n]-two[n-1];
  if (ans < 0)
    ans += MOD;
  cout << ans << endl;
  return 0;
}
