#include <bits/stdc++.h>
#define int long long

using namespace std;

const int M = 1e5+10, INF = 1e9+10;
int t, n, a[M], s[M], cnt[M], st[M], e[M], o[M];

void clear() {
  fill(cnt, cnt+M, 0);
  fill(st, st+M, 0);
  fill(e, e+M, 0);
  fill(o, o+M, 0);
}

int32_t main() {
  cin >> t;
  while (t--){
    clear();
    cin >> n;
    for (int i = 1; i <= n; i++){
      cin >> a[i];
      s[i] = a[i];
      cnt[s[i]]++;
    }
    sort(s+1, s+n+1);
    for (int i = 1; i <= n; i++)
      if (st[s[i]] == 0)
	st[s[i]] = i;
    bool con = true;
    for (int i = 1; i <= n; i++){
      if (abs(i-st[a[i]]) % 2 == 0)
	e[a[i]]++;
      else
	o[a[i]]++;
    }
    for (int i = 1; i <= n; i++){
      int num = s[i];
      if (cnt[num]/2 == o[num] && (cnt[num]+1)/2 == e[num])
	continue;
      else
	con = false;
    }
    if (con)
      cout << "YES" << endl;
    else
    cout << "NO" << endl;
  }
  return 0;
}
