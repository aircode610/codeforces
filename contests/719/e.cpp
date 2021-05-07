#include <bits/stdc++.h>
#define int long long

using namespace std;

const int INF = 1e18+10;

int32_t main() {
  int t; cin >> t;
  while (t--){
    int n; cin >> n;
    string str; cin >> str;
    str = '-'+str;
    int ans = INF, dp[n+1], l=0, r=0;
    fill(dp, dp+n+1, 0);
    vector<int> sh;
    for (int i = 1; i < str.size(); i++)
      if (str[i] == '*')
	sh.push_back(i);
    r = sh.size();a
    for (int i = 0; i < sh.size(); i++){
      dp[1] += sh[i]-i-1;
    }
    for (int s = 2; s <= n-sh.size()+1; s++){
      dp[s] = dp[s-1]+
    }
  }
  return 0;
}
