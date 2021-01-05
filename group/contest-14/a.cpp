#include <bits/stdc++.h>
#define int long long
 
using namespace std;
 
const int MOD=1e9+7;
 
int pw(int a, int b){
  if (b == 0)
    return 1;
  int p = pw(a,b/2);
  if (b % 2 == 0)
    return (p*p)%MOD;
  return (((p*p)%MOD)*a)%MOD;
}
 
int32_t main() {
 
  int n, m;
  cin >> n >> m;
 
  cout << pw((pw(2,m)-1),n) << endl;
  
  return 0;
}
