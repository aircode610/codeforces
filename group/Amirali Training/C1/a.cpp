#include <bits/stdc++.h>
#define int long long

using namespace std;

const int M = 2e5+10;
int n, m, ans, dpl[M], dpr[M];
string s, t;

void prec() {
  int p = 1;
  for (int i = 1; i <= m; i++){
    while (s[p] != t[i])
      p++;
    dpl[i] = p++;
  }
  p = n;
  for (int i = m; i >= 1; i--){
    while (s[p] != t[i])
      p--;
    dpr[i] = p--;
  } 
}

int32_t main() {
  cin >> n >> m >> s >> t;
  s = '-'+s;
  t = '-'+t;
  prec();
  for (int i = 1; i < m; i++){
    ans = max(dpr[i+1]-dpl[i], ans);
  }
  cout << ans << endl;
  return 0;
}
