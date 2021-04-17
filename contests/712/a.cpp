#include <bits/stdc++.h>
#define int long long

using namespace std;

int32_t main(){
  int t;
  cin >> t;
  while (t--){
    string s;
    cin >> s;
    int l = s.size(), p = l-1;
    string ans = "";
    for (int i = 0; i < l; i++){
      if (s[p] != 'a'){
	for (int j = 0; j < i; j++)
	  ans += s[j];
	ans += 'a';
	for (int j = i; j < l; j++)
	  ans += s[j];
	break;
      }
      p--;
    }
    if (ans == "")
      cout << "NO" << endl;
    else{
      cout << "YES" << endl;
      cout << ans << endl;
    }
  }
  return 0;
}
