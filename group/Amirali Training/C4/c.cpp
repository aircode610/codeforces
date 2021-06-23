#include <bits/stdc++.h>
#define int long long

using namespace std;

const int M = 1000+10, MOD=1e9+7;

int fac[M], ifac[M];

int pw(int a, int b){
  if (b==0LL) return 1LL;
  int p = pw(a, b/2LL);
  if (b % 2 == 0)
    return p*p%MOD;
  else
    return p*p%MOD*a%MOD;
}

int inv(int a){
  return pw(a, MOD-2);
}

void prec() {
  fac[0] = ifac[0] = 1LL;
  for (int i = 1; i < M; i++){
    fac[i] = fac[i-1]*i%MOD;
    ifac[i] = inv(fac[i]);
  }
}

int32_t main() {
  prec();
  int n, x, pos;
  cin >> n >> x >> pos;
  int bigger=0, smaller=0, any=0;
  int l = 0, r = n, mid;
  while (l < r){
    mid = (l+r)/2;
    if (mid > pos){
      r = mid;
      bigger++;
    }
    else{
      if (mid != pos)
	smaller++;
      l = mid+1;      
    }
  }
  any = n-bigger-smaller-1;
  //cout << bigger << ' ' << smaller << ' ' << any << endl;
  int ans = (fac[n-x]*ifac[n-x-bigger])%MOD;
  ans *= (fac[x-1]*ifac[x-smaller-1])%MOD;
  ans %= MOD;
  ans *= fac[any]%MOD;
  ans %= MOD;
  cout << ans << endl;
  return 0;
}

