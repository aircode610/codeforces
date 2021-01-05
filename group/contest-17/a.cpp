#include <bits/stdc++.h>
#define int long long

using namespace std;

vector<int> all;
int ans = 0;

int32_t main() {

  for (int i = 1; i <= 60; i++)
    for (int j = 0; j < i-1; j++)
      all.push_back(((1LL<<i)-1)^(1LL<<j));

  int a, b; cin >> a >> b;

  for (int i = 0; i < all.size(); i++){
    if (all[i] >= a && all[i] <= b)
      ans++;
  }

  cout << ans << endl;
  
  return 0;
}
