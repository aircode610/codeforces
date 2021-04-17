#include <bits/stdc++.h>

using namespace std;

int main() {
  int t; cin >> t;
  while (t--){
    int n; cin >> n;
    string a, b;
    cin >> a >> b;
    a = '-'+a;
    b = '-'+b;
    int c = 0, countz[n+1], counto[n+1];
    bool con = true;
    countz[0] = counto[0] = 0;
    for (int i = 1; i <= n; i++){
      countz[i] = countz[i-1];
      counto[i] = counto[i-1];
      if (a[i] == '0')
	countz[i]++;
      else
	counto[i]++;
    }
    for (int i = n; i >= 1; i--){
      if (i == n){
	if (a[i] == b[i])
	  continue;
	if (a[i] != b[i] && countz[i] == counto[i])
	  c++;
	else
	  con = false;
	continue;
      }
      if (a[i] == b[i] && a[i+1] != b[i+1]){
	if (countz[i] != counto[i] && c % 2 == 1)
	  con = false;
	else if (countz[i] == counto[i])
	  c++;
      }
      else if (a[i] != b[i] && a[i+1] == b[i+1]){
	if (countz[i] != counto[i] && c % 2 == 0)
	  con = false;
	else if (countz[i] == counto[i])
	  c++;
      }
    }    
    if (con == true)
      cout << "YES" << endl;
    else
    cout << "NO" << endl;
  }
  return 0;
}
