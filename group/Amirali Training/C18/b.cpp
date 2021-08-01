#include <bits/stdc++.h>
#define int long long

using namespace std;

const int M = 1e5+10,  INF = 1e9+10;
int t, k, n;

int32_t main() {
  cin >> t;
  while (t--){
    cin >> n >> k;
    string s; cin >> s;
    sort(s.begin(), s.end());
    s = '-'+s;
    if (s[1] != s[k])
      cout << s[k] << endl;
    else{
      string ans = "";
      ans += s[1];
      if (s[k+1] != s[n])
	for(int i = k+1; i <= n; i++)
	  ans += s[i];
      else
	for (int i = 1; i <= (n-k+k-1)/k; i++)
	  ans += s[k+1];
      cout << ans << endl;
    }
  }
  return 0;
}
