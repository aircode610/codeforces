#include <bits/stdc++.h>
#define int long long

using namespace std;

const int M = 2e5+10, INF = 1e9+10;
int h[M];

int32_t main() {
  int t; cin >> t;
  while (t--){
    //input
    int n; cin >> n;
    for (int i = 1; i <= n; i++)
      cin >> h[i];

    //find first and last
    sort(h+1, h+n+1);
    int ind1=0, ind2=0, mn=INF;
    for (int i = 1; i < n; i++){
      int dif = h[i+1]-h[i];
      if (dif < mn){
	mn = dif;
	ind1 = i;
	ind2 = i+1;
      }
    }

    //order
    cout << h[ind1] << ' ';
    for (int i = ind2+1; i <= n; i++)
      cout << h[i] << ' ';
    for (int i = 1; i < ind1; i++)
      cout << h[i] << ' ';    
    cout << h[ind2] << endl;
  }
  return 0;
}
