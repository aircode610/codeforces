#include <bits/stdc++.h>
#define int long long

using namespace std;

const int M = 2e5+10;
int a[M];

int32_t main() {
  int n, k, x;
  cin >> n >> k >> x;
  for (int i = 1; i <= n; i++)
    cin >> a[i];
  sort(a+1, a+n+1);
  int ans = 0;
  vector<int> need;
  for (int i = 2; i <= n; i++){
    int dif = a[i] - a[i-1];
    if (dif > x){
      ans++;
      if (dif % x != 0)
	need.push_back(dif/x);
      else
	need.push_back(dif/x-1);
    }
  }
  ans++;
  sort(need.begin(), need.end());
  for (int i = 0; i < need.size(); i++){
    //cout << need[i] << endl;
    if (need[i] <= k){
      ans--;
      k -= need[i];
    }
  }
  cout << ans << endl;
  return 0;
}
