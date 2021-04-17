#include <bits/stdc++.h>
#define int long long

using namespace std;

int32_t main() {
  int t; cin >> t;
  while (t--){
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
      cin >> a[i];
    }
    if (a[0] != a[1]){
      if (a[2] == a[0])
	cout << 2 << endl;
      else
	cout << 1 << endl;
    }
    else{
      int temp = a[0];
      for (int i = 1; i < n; i++)
	if (a[i] != temp)
	  cout << i+1 << endl;
    }
  }
  return 0;
}
