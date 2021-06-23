#include <bits/stdc++.h>
#define int long long

using namespace std;

const int M = 1000+10;
int n, k, fac[5];

int perm(int a){
  if (a == 1)
    return 0;
  else if (a == 2 || a == 0)
    return 1;
  else if (a == 3)
    return 2;
  else
    return 9;
}

int comb(int a, int b){
  int ret = 1;
  for (int i = a; i > a-b; i--){
    ret *= i;
  }
  ret /= fac[b];
  return ret;
}

int32_t main() {
  cin >> n >> k;
  int ans = 0;
  fac[0] = 1;
  for (int i = 1; i <= 4; i++)
    fac[i] = fac[i-1]*i;
  for (int i = 0; i <= k; i++){
    ans += comb(n,i)*perm(i);
  }
  cout << ans << endl;
  return 0;
}
