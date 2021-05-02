#include <bits/stdc++.h>
#define int long long

using namespace std;

int32_t main() {
  int t; cin >> t;
  while (t--){
    int n;
    cin >> n;
    int u[n+1], s[n+1], dp[n+1], sumKol=0;
    fill(dp, dp+n+1, 0);
    vector<int> so[n+1], su[n+1];
    for (int i = 1; i <= n; i++)
      cin >> u[i];
    for (int i = 1; i <= n; i++){
      cin >> s[i];
      sumKol += s[i];
    }
    for (int i = 1; i <= n; i++)
      so[u[i]].push_back(s[i]);
    for (int i = 1; i <= n; i++)
      sort(so[i].begin(), so[i].end());

    for (int i = 1; i <= n; i++){
      int sumAll = 0;
      for (int j = 0; j < so[i].size(); j++){	
	su[i].push_back(sumAll);	
	sumAll += so[i][j];
      }
    }

    for (int i = 1; i <= n; i++){
      for (int j = 0; j < so[i].size(); j++)
	dp[j+1] += su[i][so[i].size()%(j+1)];
    } 
    
    for (int k = 1; k <= n; k++){
      cout << sumKol-dp[k] << ' ';
    }
    cout << endl;
  }
  return 0;
}
