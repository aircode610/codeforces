#include <bits/stdc++.h>
#define int long long

using namespace std;

const int M = 1e5+10, INF=1e6;
int n;

bool check(int mid){  
  int m, r;
  cout << "? " << mid << endl;
  cin >> m;
  if (mid == n)
    r = INF;
  else
    cout << "? " << mid+1 << endl;
  cin >> r;
  if (m < r)
    return false;
  else
    return true;
}

int32_t main() {
  cin >> n;
  int l=1, r=n, mid;
  while(l != r){
    mid = (l+r)/2;
    if (check(mid) == true)
      l = mid+1;
    else
      r = mid;
  }
  cout << "! " << l << endl;
  return 0;
}

