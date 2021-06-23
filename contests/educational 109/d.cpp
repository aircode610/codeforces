#include <bits/stdc++.h>
#define int long long

using namespace std;

const int INF = 5000+10;

int32_t main() {
  int n; cin >> n;
  int arms[n+1], oc[n+1];
  for (int i = 1; i <= n; i++){
    cin >> arms[i];
    oc[i] = arms[i];
  }
  int ans = 0;
  for (int i = n; i >= 1; i--){
    if (arms[i] == 0)
      continue;
    int m=INF, ind=-1;
    for (int j = n; j >= 1; j--){
      int dif = abs(i-j);
      if (oc[j] == 0 && dif < m){
	m = abs(i-j);
	ind = j;
      }
    }
    ans += m;
    oc[ind] = 1;
  }
  /*
  for (int i = 1; i <= n; i++)
    cout << oc[i] << ' ';
    cout << endl;*/
  cout << ans << endl;
  return 0;
}
