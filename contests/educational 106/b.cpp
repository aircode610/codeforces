#include <bits/stdc++.h>
#define int long long

using namespace std;

int32_t main(){
  int t; cin >> t;
  while (t--){
    string s; cin >> s;
    bool have1=false, con=true;
    char last = s[0];
    for (int i = 1; i < s.size(); i++){
      if (s[i] == last && s[i] == '1')
	have1 = true;
      if (have1 == true && s[i] == last && s[i] == '0')
	con = false;
      last = s[i];
    }
    if (con == true)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
  return 0;
}
