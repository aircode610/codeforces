#include <bits/stdc++.h>
#define int long long

using namespace std;

int32_t main() {
  int t; cin >> t;
  while (t--){
    int n; cin >> n;
    vector<pair<int, int> > pos;
    for (int i = 1; i <= n; i++){
      for (int j = 1; j <= n; j++){
	char inp; cin >> inp;
	if (inp == '*')
	  pos.push_back({i, j});
      }
    }
    if (pos[0].first == pos[1].first){
      int r = pos[0].first, c1 = pos[0].second, c2 = pos[1].second, ans;
      if (r-1 >= 1)
	ans = r-1;
      else
	ans = r+1;
      for (int i = 1; i <= n; i++){
	for (int j = 1; j <= n; j++){
	  if (i == ans && (j == c1 || j == c2) || (i == pos[0].first && j == pos[0].second) || (i == pos[1].first && j == pos[1].second))
	    cout << "*";
	  else
	    cout << ".";
	}
	cout << endl;
      }
    }
    else if (pos[0].second == pos[1].second){
      int c = pos[0].second, r1 = pos[0].first, r2 = pos[1].first, ans;
      if (c-1 >= 1)
	ans = c-1;
      else
	ans = c+1;
      for (int i = 1; i <= n; i++){
	for (int j = 1; j <= n; j++){
	  if (j == ans && (i == r1 || i == r2) || (i == pos[0].first && j == pos[0].second) || (i == pos[1].first && j == pos[1].second))
	    cout << "*";
	  else
	    cout << ".";
	}
	cout << endl;
      }
    }
    else {
      int r1 = pos[0].first, r2 = pos[1].first, c1 = pos[0].second, c2=pos[1].second;
      for (int i = 1; i <= n; i++){
	for (int j = 1; j <= n; j++){
	  if ((i == r1 && j == c2) || (i == r2 && j == c1) || (i == pos[0].first && j == pos[0].second) || (i == pos[1].first && j == pos[1].second))
	    cout << "*";
	  else
	    cout << ".";
	}
	cout << endl;
      }
    }
  }
  return 0;
}

