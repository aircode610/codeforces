#include <bits/stdc++.h>
#define int long long

using namespace std;

const int M = 100+10;
int cnt[M];

void clear(int n){
  fill(cnt+1, cnt+n+1, 0);
}

int32_t main() {
  int t; cin >> t;
  while (t--){
    int n; cin >> n;
    clear(n);
    int maxs = 0;
    for (int i = 1; i <= n; i++){
      int inp; cin >> inp;
      cnt[inp]++;
      maxs = max(cnt[inp], maxs);
    }
    cout << maxs << endl;
  }
  return 0;
}
