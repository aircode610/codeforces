#include <bits/stdc++.h>
#define int long long

using namespace std;

const int M = 2e5+10;
int t, n, a[M];

int32_t main() {
  cin >> t;
  while (t--){
    //input
    cin >> n;
    for (int i = 1; i <= n; i++)
      cin >> a[i];
    //check
    int p = 0, pre = 0, suf = 0;
    for (int i = 1; i <= n; i++){
      if (a[i] == i)
	pre++;
      else
	break;
    }
    for (int i = n; i >= 0; i--){
      if (a[i] == i)
	suf++;
      else
	break;
    }
    //cout << pre << ' ' << suf << endl;
    for (int i = 1; i <= n; i++)
      if (a[i] == i)
	p++;
    if (p == n)
      cout << 0 << endl;
    else if (p == pre+suf)
      cout << 1 << endl;
    else
      cout << 2 << endl;
  }
  return 0;
}
