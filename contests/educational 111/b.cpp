#include <bits/stdc++.h>
#define int long long

using namespace std;

const int M = 2e5+10, INF = 1e9+10;
int t, n, a, b;
string s;

int32_t main() {
  cin >> t;
  while (t--){
    cin >> n >> a >> b;
    cin >> s;
    int ans = a*n;
    if (b > 0)
      ans += b*n;
    else{
      int cntz = 0, cnto = 0, last = 'a';
      for (int i = 0; i < n; i++){
	if (s[i] != last){
	  if (s[i] == '0')
	    cntz++;
	  else
	    cnto++;
	  last = s[i];
	}
      }
      ans += (min(cntz, cnto)+1)*b;
    }
    cout << ans << endl;
  }
  return 0;
}
