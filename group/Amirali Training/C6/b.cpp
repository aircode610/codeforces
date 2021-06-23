#include <bits/stdc++.h>
#define int long long

using namespace std;

const int INF = 1e9;

int32_t main() {
  int t; cin >> t;
  while (t--){
    int p, q;
    cin >> p >> q;
    
    if (p % q != 0){
      cout << p << endl;
      continue;
    }

    //tajzie
    vector<pair<int, int> > factors;
    for (int i = 2; i*i <= q; i++){
      if (q % i != 0)
	continue;
      
      int cnt = 0;
      while (q % i == 0){
	q /= i;
	cnt++;
      }
      factors.push_back({i, cnt});
    }
    if (q > 1)
      factors.push_back({q, 1});
    
    int ans = -1;
    for (auto x : factors){
      int temp = p;
      
      while (temp % x.first == 0)
	temp /= x.first;      
      for (int i = 1; i < x.second; i++)
	temp *= x.first;
      ans = max(ans, temp);
    }
    cout << ans << endl;
  }
  return 0;
}
