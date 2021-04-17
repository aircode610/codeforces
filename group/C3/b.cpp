#include <bits/stdc++.h>
#define int long long

using namespace std;

const int M = 2000+10, INF = 2000+10;
int t, n, board[M][M], prec[10][4], ans[10];

void clear() {
  for (int i = 0; i < 10; i++){
    prec[i][0] = INF;
    prec[i][1] = 0;
    prec[i][2] = INF;
    prec[i][3] = 0;
    ans[i] = 0;
  }
}

void solve() {
  cin >> n;
  clear();
  char inp;
  for (int i = 1; i <= n; i++){
    for (int j = 1; j <= n; j++){
      cin >> inp;
      board[i][j] = inp-'0';
    }
  }

  //precalculate min row, max row, ...
  for (int i = 1; i <= n; i++){
    for (int j = 1; j <= n; j++){
      int num = board[i][j];
      prec[num][0] = min(prec[num][0], i); // min row
      prec[num][1] = max(prec[num][1], i); // max row
      prec[num][2] = min(prec[num][2], j); // min col
      prec[num][3] = max(prec[num][3], j); // max col
    }
  }

  for (int i = 1; i <= n; i++){
    for (int j = 1; j <= n; j++){
      int num = board[i][j];
      ans[num] = max(ans[num], max(j-1, n-j)*max(prec[num][1]-i, i-prec[num][0]));
      ans[num] = max(ans[num], max(i-1, n-i)*max(prec[num][3]-j, j-prec[num][2]));
    }
  }
  
  for (int i = 0; i < 10; i++)
    cout << ans[i] << ' ';
  cout << endl;
}

int32_t main(){
  cin >> t;
  while (t--)
    solve();
  return 0;
}
