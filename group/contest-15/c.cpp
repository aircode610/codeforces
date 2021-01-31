#include <bits/stdc++.h>
#define int long long

using namespace std;

const int M = 1e3+10, MOD=998244353;
int n, a[M], dp[M];

#define _ %MOD
#define __ %=MOD
int fac[M],ifac[M];

int pw(int a,int b) {
  if(b==0LL)return 1LL;
  int p=pw(a,b/2LL);
  if(b%2LL==0LL)
    return p*p _;
  return p*p _ * a _;
}

int inv(int a){
  return pw(a, MOD-2);
}

int comb(int a,int b)
{
  if (b>a) return 0;
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
  cin >> n;
  
  prec();  
  for (int i = 1; i <= n; i++)
    cin >> a[i];

  dp[n+1] = 1;
  for (int i = n; i >= 1; i--){
    if (a[i] <= 0){
      dp[i] = 0;
      continue;
    }
    else{
      for (int j = i+a[i]+1; j <= n+1; j++){
	(dp[i] += comb(j-i-1, a[i])*dp[j] _)__;
      }
    }
  }

  int ans = 0;
  for (int i = 1; i <= n; i++){
    (ans += dp[i]_)__;
  }

  cout << ans << endl;
  
  return 0;
}
