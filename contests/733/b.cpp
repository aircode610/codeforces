#include <bits/stdc++.h>
#define int long long

using namespace std;
const int M = 2e5+10, INF = 1e9+10;
int table[30][30], table2[30][30];

int32_t main() {
  int t; cin >> t;
  while (t--){
    int h, w;
    cin >> h >> w;    
    for (int i = 1; i < 30; i++)
      for (int j = 1; j < 30; j++)
	table[i][j] = 0;
    for (int i = 1; i < 30; i++)
      for (int j = 1; j < 30; j++)
	table2[i][j] = 0;

    int cnt1 = 0, cnt2 = 0;
    for (int i = 1; i <= h; i++){
      for (int j = 1; j <= w; j++){
	if (i == 1 || i == h || j == 1 || j == w){
	  if (table[i-1][j] || table[i][j-1] || table[i][j+1] || table[i-1][j-1] || table[i-1][j+1] ||  table[i+1][j-1] || table[i+1][j+1])
	    continue;
	  else{
	    table[i][j] = 1;
	    cnt1++;
	  }
	}
      }
    }
    table2[1][2] = 1;
    for (int i = 1; i <= h; i++){
      for (int j = 1; j <= w; j++){
	if (i == 1 || i == h || j == 1 || j == w){
	  if (table2[i-1][j] || table2[i][j-1] || table2[i][j+1] || table2[i-1][j-1] || table2[i-1][j+1] ||  table2[i+1][j-1] || table2[i+1][j+1])
	    continue;
	  else{
	    table2[i][j] = 1;
	    cnt2++;
	  }
	}
      }
    }

    if (cnt1 > cnt2){
      for (int i = 1; i <= h; i++){
	for (int j = 1; j <= w; j++)
	  cout << table[i][j];
	cout << endl;
      }
    }
    else{
      for (int i = 1; i <= h; i++){
	for (int j = 1; j <= w; j++)
	  cout << table2[i][j];
	cout << endl;
      }
    }
  }  
  return 0;
}
