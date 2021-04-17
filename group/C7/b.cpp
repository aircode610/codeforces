#include <bits/stdc++.h>
#define int long long

using namespace std;

const int M = 1e5+10;
int a[M];

bool allInfected(int n, int x) {
  for (int i = 1; i <= n; i++)
    if (a[i] != x)
      return false;
  return true;
}

bool oneInfected(int n, int x){
  for (int i = 1; i <= n; i++)
    if (a[i] == x)
      return true;
  return false;
}

bool allZero(int n, int x){
  int sumAll = 0;
  for (int i = 1; i <= n; i++)
    sumAll += a[i]-x;
  if (sumAll == 0)
    return true;
  return false;
}

int32_t main() {
  int t; cin >> t;
  while (t--){
    int n, x;
    cin >> n >> x;
    for (int i = 1; i <= n; i++)
      cin >> a[i];
    if (allInfected(n, x))
      cout << 0 << endl;
    else if (oneInfected(n, x) || allZero(n, x))
      cout << 1 << endl;
    else
      cout << 2 << endl;
  }
  return 0;
}
