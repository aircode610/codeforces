#include <bits/stdc++.h>
#define int long long

using namespace std;

const int M = 1000+10, MOD=1e9+7;
int t, k, n, cnt[M], fac[M], ifac[M];

#define _ %MOD
#define __ %=MOD

int pw(int a, int b){
  if (b == 0LL) return 1LL;
  int p = pw(a, b/2LL);
  if (b % 2LL == 0LL)
    return p * p _;
  else
    return p * p _ * a _;
}

int inv(int a){
  return pw(a, MOD-2);
}

int comb(int a, int b){
  if(b>a) return 0;
  return fac[a] * ifac[b] _ * ifac[a-b] _;
}

void prec(){
  fac[0] = ifac[0] = 1LL;
  for (int i = 1; i < M; i++){
    fac[i] = fac[i-1] * i _;
    ifac[i] = inv(fac[i]) ;
  }
}

int32_t main() {
  prec();
  cin >> t;
  while (t--){
    cin >> n >> k;
    vector<int> a;
    fill(cnt, cnt+M, 0);
    for (int i = 1; i <= n; i++){
      int inp; cin >> inp;
      cnt[inp]++;
      a.push_back(inp);
    }
    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());
    int m = 0, num = a[k-1], c = 0;
    while (c < a.size() && a[c++] != num)
      m++;
    int ans = comb(cnt[num], k-m);
    cout << ans << endl;
  }  
  return 0;
}

