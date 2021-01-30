#include <bits/stdc++.h>
#define int long long
#define FAST ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

using namespace std;

const int M = 2e5+10;
int t, a[M], b[M], cnta[M], cntb[M];

void clear(int n){
  fill(cnta, cnta+n, 0);
  fill(cntb, cntb+n, 0);
}

int32_t main() {
  FAST
  cin >> t;
  while (t--){
    int boys, girls, k;
    cin >> boys >> girls >> k;
    clear(max(boys, girls)+1);
    for (int i = 1; i <= k; i++){
      cin >> a[i];
      cnta[a[i]]++;
    }
    for (int i = 1; i <= k; i++){
      cin >> b[i];
      cntb[b[i]]++;
    }
    int ans = 0;
    for (int i = 1; i <= k; i++){
      ans += k-cnta[a[i]]-cntb[b[i]]+1;
    }
    ans /= 2;
    cout << ans << endl;
  }
  return 0;
}

