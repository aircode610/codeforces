#include <bits/stdc++.h>
#define int long long

using namespace std;

const int M = 1e5+10, MOD = 1e9+7;

string s;

int32_t main() {
  cin >> s;
  string del = "";
  int ans = 1;
  int cnt = 0;
  bool con = false;
  for (int i = 0; i < s.size(); i++){
    if (s[i] == 'a'){
      cnt++;
      con = true;
    }
    if (s[i] == 'b'){
      (ans *= ++cnt%MOD)%=MOD;
      cnt = 0;
    }
  }
  if (con == true)
    cout << ans*++cnt%MOD-1 << endl;
  else
    cout << 0 << endl;
  return 0;
}

