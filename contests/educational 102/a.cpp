#include <bits/stdc++.h>
#define int long long

using namespace std;

int32_t main() {
  int t; cin >> t;
  while (t--){
    int n, d;
    cin >> n >> d;
    int a[n+1];
    for (int i = 1; i <= n; i++){
      cin >> a[i];
    }
    bool con = false;
    bool con2 = true;
    for (int i = 1; i <= n; i++){
      if (a[i] > d)
	con2 = false;
      for (int j = 1; j <= n && j != i; j++){
	if (a[i] + a[j] <= d){
	  con = true;
	}
      }
    }
    if (con == false){
      if (con2 == true)
	cout << "YES" << endl;
      else
	cout << "NO" << endl;
    }
    else{
      cout << "YES" << endl;      
    }
  }
  
  return 0;
}
