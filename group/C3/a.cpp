#include <bits/stdc++.h>
#define int long long

using namespace std;

const int M = 1e5+10, INF=1e9+10;
int t, n;
vector<int> miners, diams;
double ans;

void clear(){
  miners.clear();
  diams.clear();
  ans = 0.0;
}

void solve(){  
  cin >> n;
  clear();
  miners.push_back(0);
  diams.push_back(0);
  int x, y;
  for (int i = 1; i <= 2*n; i++){
    cin >> x >> y;
    if (x == 0)
      miners.push_back(abs(y));
    else
      diams.push_back(abs(x));
  }
  
  sort(miners.begin(), miners.end());
  //reverse(miners.begin(), miners.end());
  sort(diams.begin(), diams.end());

  for (int i = 1; i <= n; i++){
    //cout << "* " <<  miners[i] << ' ' << diams[i] << endl;
    ans += sqrt((double)pow(miners[i], 2.0)+pow((double)diams[i], 2.0));
  }

  cout << std::fixed << std::setprecision(15) << ans << endl;
}

int32_t main(){
  cin >> t;
  while (t--)
    solve();
  return 0;
}
