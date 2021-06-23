#include <bits/stdc++.h>
#define int long long

using namespace std;

const int MOD = 1e9+7;

int tri(int a){
  return (a*(a+1)/2)%MOD;
}

int32_t main() {
  string n; cin >> n;
  int ans = 0, l = n.size(), p = 1, sumj = 0;
  for (int i = l-1; i >= 0; i--){
    int dig = n[i]-'0';
    int all = (i * (i+1) / 2 %MOD * p %MOD + sumj) %MOD;
    sumj = (sumj + p * (l - i) %MOD) %MOD;
    p = p*10%MOD;
    ans = (ans + dig * all %MOD)%MOD;
  }
  cout << ans << endl;
  return 0;
}
