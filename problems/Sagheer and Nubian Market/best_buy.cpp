#include <bits/stdc++.h>
#define int long long

using namespace std;

const int M = 1e5 + 10;
int S, n, a[M], b[M], T;

bool comp(int k){
  for(int i = 1; i <= n; i++)
    b[i] =  a[i] + i * k;
  sort(b+1, b+n+1);
  T = 0;
  for (int i = 1; i <= k; i++)
    T += b[i];
  if (T <= S)
    return true;
  return false;
}

int32_t main() {

  cin >> n >> S;
  for (int i = 1; i <= n; i++){
    cin >> a[i];
  }

  int l = 0, r = n + 1, mid;
  while (r-l > 1){
    mid = (l+r)/2;
    if(comp(mid))
      l = mid;
    else
      r = mid;
  }
  comp(l);
  cout << l << " " << T << endl;
  
  return 0;
}
