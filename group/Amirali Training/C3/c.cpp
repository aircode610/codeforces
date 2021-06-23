#include <bits/stdc++.h>
#define int long long

using namespace std;

int32_t main(){
  int t; cin >> t;
  while (t--){
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    
    if (n % k != 0){
      cout << -1 << endl;
      continue;
    }

    int cnt[26], need = 0;
    fill(cnt, cnt+26, 0);
    for (int i = 0; i < s.size(); i++)
      cnt[s[i]-'a']++;
    
  }
  return 0;
}
