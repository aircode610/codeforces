#include <bits/stdc++.h>
#define int long long

using namespace std;

int32_t main() {
  int n, q;
  cin >> n >> q;
  string s; cin >> s;
  int pre[n+1], suf[n+2], str[n+1], sumAll=0;
  for (int i = 0; i < n; i++){
    //cout << s[i] << ' ' << s[i]-'a'+1 << endl;
    str[i+1] = s[i]-'a'+1;
    sumAll += str[i+1];
  }
  pre[0] = suf[n+1] = 0;
  for (int i = 1; i <= n; i++)
    pre[i] = str[i]+pre[i-1];
  for (int i = n; i >= 1; i--)
    suf[i] = str[i]+suf[i+1];
  for (int i = 1; i <= q; i++){
    int l, r;
    cin >> l >> r;
    cout << sumAll-pre[l-1]-suf[r+1] << endl;
  }
  return 0;
}

