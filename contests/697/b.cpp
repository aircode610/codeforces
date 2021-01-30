#include <bits/stdc++.h>
#define int long long

using namespace std;

bool solve(int n){
  int div = n/2020;
  if (n % 2020 <= div)
    return true;
  return false;
}

int32_t main() {
  int t; cin >> t;
  while (t--){
    int n; cin >> n;
    if(solve(n))
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
  return 0;
}

//adfad
