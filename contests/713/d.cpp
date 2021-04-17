#include <bits/stdc++.h>
#define int long long

using namespace std;

int32_t main() {
  int t; cin >> t;
  while (t--){
    int n; cin >> n;
    int b[n+3], summ=0;
    for (int i = 1; i <= n+2; i++){
      cin >> b[i];
      summ += b[i];
    }
    
    sort(b+1, b+n+3);
    bool con = false;
    int x=-1, s=n+2;
    for (int i = 1; i < n+2; i++){
      if (summ - b[i] - b[s] == b[s]){
	x = i;
	con = true;
	break;
      }
    }
    if (con == true){
      for (int i = 1; i <= n+2; i++){
	if (i != x && i != s)
	  cout << b[i] << ' ';
      }
      cout << endl;
      continue;
    }
    
    x = n+2;
    s = n+1;
    if (summ - b[x] - b[s] == b[s]){
      for (int i = 1; i <= n+2; i++){
	if (i != x && i != s)
	  cout << b[i] << ' ';
      }
      cout << endl;
    }
    else{
      cout << -1 << endl;
    }
  }
  
  return 0;
}

