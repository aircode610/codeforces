#include <bits/stdc++.h>
#define int long long
#define count iadjsfdls

using namespace std;

const int M = 1e5+10;
int t, a[M], b[M], c[M];
vector<int> count[M];

void clear(int n, int m) {
  fill(a+1, a+n+1, 0);
  fill(b+1, b+n+1, 0);
  fill(c+1, c+m+1, 0);
  for (int i = 1; i <= n; i++)
    count[i].clear();
}

void solve() {
  int n, m;
  cin >> n >> m;
  clear(n, m);
  for (int i = 1; i <= n; i++)
    cin >> a[i];
  for (int i = 1; i <= n; i++)
    cin >> b[i];
  for (int i = 1; i <= m; i++)
    cin >> c[i];
  
  for (int i = 1; i <= n; i++){
    if (a[i] != b[i]){
      count[b[i]].push_back(i);
    }
  }
  
  vector<int> waste, ans;
  for (int i = 1; i <= m; i++){
    int len = count[c[i]].size();
    if (len > 0){
      for (int j = 0; j <= waste.size(); j++)
	ans.push_back(count[c[i]][len-1]);
      count[c[i]].pop_back();
      waste.clear();
    }
    else 
      waste.push_back(c[i]);
  }

  if (waste.size() > 0){
    for (int i = 1; i <= n; i++){
      if (waste[waste.size()-1] == b[i]){
	for (int j = 0; j < waste.size(); j++)
	  ans.push_back(i);
	waste.clear();
      }
    }
  }
  for (int i = 1; i <= n; i++){
    if (count[i].size() > 0){
      cout << "NO" << endl;
      return ;
    }
  }
  if (waste.size() == 0){
    cout << "YES" << endl;
    for (int i = 0; i < ans.size(); i++)
      cout << ans[i] << ' ';
    cout << endl;
  }
  else
    cout << "NO" << endl;
}

int32_t main() {
  cin >> t;
  while (t--)
    solve();
  return 0;
}

