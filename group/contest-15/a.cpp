#include<bits/stdc++.h>
using namespace std;
#define int long long
const int M=777+10;
//
int fac[M];
int comb(int a,int b)
{
  if (b > a) return 0;
  cout << fac[a]/(fac[b]*fac[a-b]) << endl;
  return fac[a]/(fac[b]*fac[a-b]) ;//a!/(b!(a-b)!)
}
void prec()
{
  fac[0]=1LL;
  for(int i=1;i<M;i++)
    fac[i]=fac[i-1]*i ;
}

int32_t main() {
  prec();
  int n; cin >> n;
  int ans = 0;
  for (int i = 5; i <= 7; i++)
    ans += comb(n, i);
  cout << ans << endl;
  return 0;
}
