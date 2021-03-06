#include <bits/stdc++.h>
#define int long long

using namespace std;

const int M = 1e7;

bool solve(int n){
  int cnt = 2;  
  while (n != 1){
    if (n % 2 == 1)
      return true;
    if (n % cnt == 0){
      if (cnt % 2 == 1)
	return true;
      n /= cnt;
    }
    else
      cnt++;
  }
  return false;
}

int32_t main() {  
  int t; cin >> t;
  while (t--){
    int n; cin >> n;
    bool con = solve(n);
    if (con)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
  return 0;
}
