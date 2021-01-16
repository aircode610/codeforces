#include <bits/stdc++.h>
#define int long long

using namespace std;

void solve(){
  int n, m;
  cin >> n >> m;
  string des; cin >> des;
  for (int i = 1; i <= m; i++){
    int l, r;
    cin >> l >> r;;
    string str = des;
    str.erase(l-1,r-l+1); 
    int max=0;
    int x = 0;
    set<int> s;
    s.insert(x);
    for (int j = 0; j < str.size(); j++){
      if (str[j] == '+')
	x++;
      else
	x--;
      if (x < *s.begin())
	s.insert(x);
      else if (x > max){
	max = x;
	s.insert(x);
      }
    }
    cout << s.size() << endl;
  }
}

int32_t main() {
  int t; cin >> t;
  while (t--){
    solve();
  }
  return 0;
}

