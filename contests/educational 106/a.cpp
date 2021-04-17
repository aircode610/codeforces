#include <bits/stdc++.h>
#define int long long

using namespace std;

int32_t main(){
  int t;
  cin >> t;
  while (t--){
    int n, k1, k2;
    cin >> n >> k1 >> k2;
    int w, b;
    cin >> w >> b;
    if ((k1+k2)/2 >= w && (2*n-(k1+k2))/2 >= b)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
  return 0;
}
