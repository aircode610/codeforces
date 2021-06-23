#include <bits/stdc++.h>
#define int long long

using namespace std;

const int M = 20000+10;

int ans[M][7], grid[110][110], k, op;
vector<int> ones;

void three(int a, int b){
  int ind = 1;
  if (grid[a][b] == 1){
    ans[op][ind++] = a;
    ans[op][ind++] = b;
  }
  if (grid[a][b+1] == 1){
    ans[op][ind++] = a;
    ans[op][ind++] = b+1;
  }
  if (grid[a+1][b] == 1){
    ans[op][ind++] = a+1;
    ans[op][ind++] = b;
  }
  if (grid[a+1][b+1] == 1){
    ans[op][ind++] = a+1;
    ans[op][ind++] = b+1;
  }
}

int32_t main() {
  int t; cin >> t;
  while (t--){
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
      for (int j = 1; j <= m; j++)
	cin >> grid[i][j];
    k = 0;
    op = 1;
    for (int i = 1; i < n; i++){
      for (int j = 1; j < m; j++){
	int x1 = i, y1 = j;
	int x2 = i, y2 = j+1;
	int x3 = i+1, y3 = j;
	int x4 = i+1, y4 = j+1;
	ones.clear();
	if (grid[x1][y1] == 1)
	  ones.push_back(1);
	if (grid[x2][y2] == 1)
	  ones.push_back(2);
	if (grid[x3][y3] == 1)
	  ones.push_back(3);
	if (grid[x4][y4] == 1)
	  ones.push_back(4);
	if (ones.size() == 3){
	  k++;
	  three(i, j);
	  op++;
	}
      }
    }
  }
  return 0;
}

/*
011
111
110
 */
