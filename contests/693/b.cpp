#include <bits/stdc++.h>
#define int long long

using namespace std;

bool cal(int n){
  vector<int> c1, c2;
  for (int i = 1; i <= n; i++){
    int c; cin >> c;
    if (c == 1)
      c1.push_back(c);
    else
      c2.push_back(c);
  }
  int l1 = c1.size();
  int l2 = c2.size();
  if ((l1 % 2 == 0 && l2 == 0) || (l2 % 2 == 0 && l1 == 0))
    return true;
  for (int i = 0; i <= l1; i++){
    for (int j = 0; j <= l2; j++){
      if (i+j*2 == (l1-i)+(l2-j)*2)
	return true;
    }
  }
  return false;
}

int32_t main() {
  int t; cin >> t;

  while (t--){
    int n; cin >> n;
    if (cal(n))
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
  
  return 0;
}
