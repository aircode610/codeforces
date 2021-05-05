#include <bits/stdc++.h>
#define int long long

using namespace std;

int32_t main() {
  int t; cin >> t;
  while (t--){
    int n, x;
    cin >> n >> x;
    int w[n+1];
    for (int i = 1; i <= n; i++)
      cin >> w[i];

    sort(w+1, w+n+1);
    vector<int> ans;
    int f = 1, l = n, s = 0;
    bool con = true;
    while (f != l){
      if (s + w[f] == x){
	if (s + w[l] == x)
	  con = false;
	else{
	  ans.push_back(w[l]);
	  s += w[l--];
	}
      }
      else{
	ans.push_back(w[f]);
	s += w[f++];
      }      
    }
    ans.push_back(w[f]);
    s += w[f];
    if (con == false || s == x)
      cout << "NO" << endl;
    else{
      cout << "YES" << endl;
      for (int i = 0; i < ans.size(); i++)
	cout << ans[i] << ' ';
      cout << endl;
    }
  }
  return 0;
}
