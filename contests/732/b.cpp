#include <bits/stdc++.h>
#define int long long

using namespace std;

const int M = 1e5+10, INF = 1e9+10;
int t, n, m, cnt[M][100];

void clear(){
  for (int i = 0; i <= m; i++){
    for (int j = 0; j < 100; j++)
      cnt[i][j] = 0;
  }
}

int32_t main() {
  cin >> t;
  while (t--){
    cin >> n >> m;
    clear();
    for (int i = 1; i <= n; i++){
      string inp; cin >> inp;
      for (int j = 1; j <= m; j++){
	int c = inp[j-1]-'a';
	cnt[j][c]++;
      }
    }
    for (int i = 1; i < n; i++){
      string inp; cin >> inp;
      for (int j = 1; j <= m; j++){
	int c = inp[j-1]-'a';
	//cout << c << endl;
	cnt[j][c]--;
      }
    }

    for (int i = 1; i <= m; i++){
      for (int j = 0; j < 26; j++){
	if(cnt[i][j] == 1)
	  cout << char(j+'a');
      }
    }
    cout << endl;
    fflush(stdout);
  }
  return 0;
}
