#include <bits/stdc++.h>
#define int long long
#define _ %MOD
#define __ %=MOD

using namespace std;

const int M=2e5+10, MOD=998244353;
int fac[M],ifac[M];
int pw(int a,int b)
{
  if(b==0LL)return 1LL;
  int p=pw(a,b/2LL);
  if(b%2LL==0LL)
    return p*p _;
  return p*p _ * a _;
}
int inv(int a)
{
  return pw(a,MOD-2);
}
int comb(int a,int b)
{
  return fac[a]*ifac[b] _ *ifac[a-b] _;//a!/(b!(a-b)!)
}
void prec()
{
  fac[0]=ifac[0]=1LL;
  for(int i=1;i<M;i++)
    {
      fac[i]=fac[i-1]*i _ ;
      ifac[i]=inv(fac[i]);
    }
}

int32_t main() {

  prec();
  int n, m; cin >> n >> m;
  int ans = ((comb(m, n-1)*(n-2))%MOD*pw(2,n-3))%MOD;

  cout << ans << endl;
  
  return 0;
}
