#include <bits/stdc++.h>
#define int long long
#define double long double

using namespace std;

const int M = 2e5+10, INF = 1e9+10, E = 1e-9;
int t;
double c, m, p, v, ans;

int32_t main() {
  cin >> t;
  while (t--){
    cin >> c >> m >> p >> v;
    ans = p;
    for (int i = 1; i <= 19; i++){
      for (int mask = 0; mask < (1<<i); mask++){
	double x = c, y = m, z = p, sum = i+1;
	for (int j = 0; j < i; j++){
	  if (mask&(1<<j)){
	    if (abs(x) < E)
	      break;
	    sum *= x;
	    if (abs(sum) < E)
	      break;
	    if (abs(y) > E){
	      y += min(v, x)/2;
	      z += min(v, x)/2;
	    }
	    else
	      z += min(v, x);
	    x = x-min(x, v);
	  }
	  else {
	    if (abs(y) < E)
	      break;
	    sum *= y;
	    if (abs(sum) < E)
	      break;
	    if (abs(x) > E){
	      x += min(v, y)/2;
	      z += min(v, y)/2;
	    }
	    else
	      z += min(v, y);
	    y = y-min(v, y);
	  }
	  if (j == i-1){
	    sum *= z;
	    if (abs(sum) < E)
	      break;
	    //cout << sum << endl;
	    ans += sum;
	  }
	}
      }
    }
    cout << fixed << setprecision(12) << ans << endl;
  }
  return 0;
}
