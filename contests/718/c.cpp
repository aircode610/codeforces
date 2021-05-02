#include <bits/stdc++.h>
#define int long long

using namespace std;

const int M = 500+10;
int grid[M][M];

int32_t main() {
  int n; cin >> n;
  for (int i = 1; i <= n; i++)
    cin >> grid[i][i];
  for (int i = 1; i <= n; i++){
    grid[i][0] = 1;
    grid[n+1][i] = 1;
  }
  for (int i = 1; i <= n; i++){
    int cnt = 1, num = grid[i][i];
    int x=i, y=i;
    while (cnt < num){
      if (grid[x][y-1] == 0){
	grid[x][y-1] = num;
	y--;
	cnt++;
      }
      else if (grid[x+1][y] == 0){
	grid[x+1][y] = num;
	x++;
	cnt++;
      }
      else if (grid[x][y+1] == 0){
	grid[x][y+1] = num;
	y++;
	cnt++;
      }
      else {
	cout << -1 << endl;
	return 0;
      }
    }
  }
  for (int i = 1; i <= n; i++){
    for (int j = 1; j <= i; j++){
      cout << grid[i][j] << ' ';
    }
    cout << endl;
  }
  return 0;
}
