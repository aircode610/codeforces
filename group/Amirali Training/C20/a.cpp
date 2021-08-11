#include <bits/stdc++.h>
#define int long long

using namespace std;

const int M = 2e5+10;
int t, n, k, cnt[M][30];
string s;

void clear() {
  for (int i = 1; i <= n; i++)
    fill(cnt[i]+1, cnt[i]+27, 0);
}

int32_t main() {
  cin >> t;
  while (t--){
    cin >> n >> k;
    cin >> s;
    clear();
    s = '-'+s;
    //count
    for (int i = 1; i < s.size(); i++){
      int ch = s[i]-'a'+1;
      if (i % k == 0)
	cnt[k][ch]++;
      else
	cnt[i%k][ch]++;
    }
    //find min
    int ans = 0;
    for (int i = 1; i <= k/2; i++){
      int mx = 0;
      for (int j = 1; j <= 26; j++)
	mx = max(mx, cnt[i][j]+cnt[k-i+1][j]);
      ans += mx;
    }
    if (k % 2 == 1){
      int mx = 0;
      for (int i = 1; i <= 26; i++)
	mx = max(mx, cnt[k/2+1][i]);
      ans += mx;
    }
    cout << n-ans << endl;
  }
 return 0;
}
