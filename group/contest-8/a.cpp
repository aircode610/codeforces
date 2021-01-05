#include <bits/stdc++.h>
#define int long long

using namespace std;

int32_t main() {

  int ans = 0;
  int probs; cin >> probs;

  while (probs--){
    int a, b, c;
    cin >> a >> b >> c;
    if (a && b || a && c || b && c)
      ans++;
  }

  cout << ans << endl;
  
  return 0;
}
