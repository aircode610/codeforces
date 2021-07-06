#include <bits/stdc++.h>
#define int long long

using namespace std;

const int M = 1000+10;
int t, n, a[M];

int32_t main() {
  cin >> t;
  while (t--){
    cin >> n;
    for (int i = 1; i <= 2*n; i++)
      cin >> a[i];
    int e = 0, o = 0;
    for (int i = 1; i <= 2*n; i++){
      if (a[i] % 2 == 0)
	e++;
      else
	o++;
    }
    if (e == o)
      cout << "Yes" << endl;
    else
      cout << "No" << endl;
  }
  return 0;
}
