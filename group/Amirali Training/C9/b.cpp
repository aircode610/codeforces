#include <bits/stdc++.h>
#define int long long

using namespace std;

const int M = 1e5+10;
int a[M];

int32_t main() {
  int n; cin >> n;
  for (int i = 1; i <= n; i++)
    cin >> a[i];
  if (n == 1){
    cout << 1 << ' ' << 1<< endl;
    cout << 0 << endl;
    cout << 1 << ' ' << 1 << endl;
    cout << 0 << endl;
    cout << 1 << ' ' << 1 << endl;
    cout << -1*a[1] << endl;
  }
  else {
    cout << 1 << ' ' << 1 << endl;
    cout << -1*a[1] << endl;
    cout << 1 << ' ' << n << endl;
    cout << 0 << ' ';
    for (int i = 2; i <= n; i++)
      cout << (-1*n) * a[i] << ' ';
    cout << endl;
    cout << 2 << ' ' << n << endl;
    for (int i = 2; i <= n; i++)
      cout << (n-1) * a[i] << ' ';
    cout << endl;
  }
  return 0;
}
