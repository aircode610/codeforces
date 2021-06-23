#include <bits/stdc++.h>
#define int long long

using namespace std;

int32_t main() {
  int t; cin >> t;
  while (t--){
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    bool con = true;
    int z=0, o=0;
    for (int i = 0; i < k; i++){
      int now = -1;
      for (int j = i; j < n; j+=k){
	int num = s[j]-'0';
	if (s[j] != '?'){	  
	  if (now != -1 && num != now){
	    con = false;
	    break;
	  }
	  now = num;
	}	
      }
      if (now != -1){
	if (now == 0)
	  z++;
	else
	  o++;
      }
    }
    if (z <= k/2 && o <= k/2 && con == true)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
  return 0;
}
