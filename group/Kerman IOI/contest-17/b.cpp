#include <bits/stdc++.h>
#define int long long

using namespace std;

int32_t main() {

  int n; cin >> n;
  int a[n];

  for (int i = 0; i < n; i++)
    cin >> a[i];
  
  for (int mask = 1; mask < (1<<(n+1))-1; mask++){
    int sumRot = 0;
    int moves = mask;
    int ind = 0;
    while (ind < n){
      int u = moves&1;
      if (u)
	sumRot += a[ind];
      else
	sumRot -= a[ind];
      moves = (moves>>1);
      ind++;
    }
    if (sumRot%360 == 0){
      cout << "YES" << endl;
      return 0;
    }
  }
  cout << "NO" << endl;
  return 0;
}
