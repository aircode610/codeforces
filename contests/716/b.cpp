#include <bits/stdc++.h>
#define int long long

using namespace std;

const int M = 1e5+10, MOD = 1e9+7;

#define _ %MOD
#define __ %=MOD

int pw(int a,int b)
{
  if(b==0LL)return 1LL;
  int p=pw(a,b/2LL);
  if(b%2LL==0LL)
    return p*p _;
  return p*p _ * a _;
}

int32_t main() {
  int t; cin >> t;
  while (t--){
    int n, k;
    cin >> n >> k;
    int ans = pw(n, k)%MOD;
    cout << ans << endl;
  }
  return 0;
}
