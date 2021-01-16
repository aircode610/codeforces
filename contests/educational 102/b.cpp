#include <bits/stdc++.h>
#define int long long

using namespace std;

int bmm(int a, int b){
  for (int i = 1; i <= b; i++){
    if (a*i % b == 0)
      return a*i;
  }
  return 0;
}

string lcm(string s, string t){
  if (s == t)
    return s;
  int ml = max(s.size(), t.size());
  string str, str2;
  if (ml == s.size()){
    str = s;
    str2 = t;
  }
  else{
    str = t;
    str2 = s;
  }
  for (int i = 0; i < str2.size(); i++){
    if (str2[i] != str[i])
      return "-1";
  }
  int slen = bmm(str.size(), str2.size());
  string ans, ans2;
  for (int i = 1; i <= slen/str.size(); i++){
    ans += str;
  }
  for (int i = 1; i <= slen/str2.size(); i++){
    ans2 += str2;
  }
  if (ans == ans2)
    return ans;
  else
    return "-1";
}

int32_t main() {
  int q; cin >> q;
  while (q--){
    string s, t;
    cin >> s >> t;
    cout << lcm(s, t) << endl;
  }
  return 0;
}

