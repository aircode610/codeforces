#include <bits/stdc++.h>
#define int long long

using namespace std;

const int INF = 1e9+10;

int32_t main() {
  int t; cin >> t;
  while (t--){
    int n, m;
    cin >> n >> m;
    int b[n+1][m+1];
    for (int i = 1; i <= n; i++)
      for (int j = 1; j <= m; j++)
	cin >> b[i][j];
    for (int i = 1; i <= n; i++)
      sort(b[i]+1, b[i]+m+1);
    int minInd[n+1], maxInd[n+1], ans[n+1][m+1];
    fill(minInd, minInd+n+1, 1);
    fill(maxInd, maxInd+n+1, m);
    for (int i = 1; i <= m; i++){
      int mn = INF, indm = -1;
      for (int j = 1; j <= n; j++){
	//cout << b[j][minInd[j]] << endl;
	if (b[j][minInd[j]] < mn){
	  mn = b[j][minInd[j]];
	  indm = j;
	}
      }
      //cout << mn << ' ' << indm << endl;
      ans[indm][i] = mn;
      minInd[indm]++;
      for (int j = 1; j <= n; j++){
	if (j != indm){
	  //cout << b[j][maxInd[j]] << ' ' << j << endl;
	  ans[j][i] = b[j][maxInd[j]];
	  maxInd[j]--;
	}
      }
    }
    for (int i = 1; i <= n; i++){
      for (int j = 1; j <= m; j++)
	cout << ans[i][j] << ' ';
      cout << endl;
    }
  }
  return 0;
}
