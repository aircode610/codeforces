#include <bits/stdc++.h>
#define int long long

using namespace std;

const int M = 2e5+10;
int n, a[M], b[M], posb[M], posa[M], dif[M];

int32_t main() {
  cin >> n;
  for (int i = 1; i <= n; i++){
    cin >> a[i];
    posa[a[i]] = i;
  }
  for (int i = 1; i <= n; i++){
    cin >> b[i];
    posb[b[i]] = i;
  }
  for (int i = 1; i <= n; i++){
    if (posb[i] >= posa[i])
      dif[posb[i]-posa[i]]++;
    else
      dif[posb[i]+n-posa[i]]++;
  }
  int ans = 1;
  for (int i = 0; i < n; i++)
    ans = max(dif[i], ans);
  cout << ans << endl;
  return 0;
}
