#include <bits/stdc++.h>
#define int long long

using namespace std;

const int M = 100+10, INF = 1e9+10;
int t, n, a[M], b[M];

int32_t main() {
  cin >> t;
  while (t--){
    cin >> n;
    for (int i = 1; i <= n; i++)
      cin >> a[i];
    for (int i = 1; i <= n; i++)
      cin >> b[i];
    vector<int> inc, dec;
    for (int i = 1; i <= n; i++){
      if (a[i] > b[i])
	for (int j = 1; j <= a[i]-b[i]; j++)
	  dec.push_back(i);
      else if (a[i] < b[i])
	for (int j = 1; j <= b[i]-a[i]; j++)
	  inc.push_back(i);
    }
    if (inc.size() != dec.size()){
      cout << -1 << endl;
      continue;
    }
    cout << dec.size() << endl;
    for (int i = 0; i < dec.size(); i++)
      cout << dec[i] << ' ' << inc[i] << endl;
  }
  return 0;
}
