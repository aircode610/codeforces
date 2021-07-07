#include <bits/stdc++.h>
#define int long long

using namespace std;

const int M = 1e5+10;
int n, b[M], a[M];
bool used[M];

int32_t main() {
  cin >> n;
  fill(b, b+M, -1);
  for (int i = 1; i <= n; i++)
    cin >> a[i];
  for (int i = 2; i <= n; i++){
    if (a[i] != a[i-1]){
      b[i] = a[i-1];
      used[a[i-1]] = true;
    }
  }
  used[a[n]] = true;
  int fill = 0;
  for (int i = 1; i <= n; i++){
    while (used[fill])
      fill++;
    if (b[i] == -1){
      b[i] = fill;
      used[fill] = true;
    }
  }
  for (int i = 1; i <= n; i++)
    cout << b[i] << ' ';
  cout << endl;
  return 0;
}
