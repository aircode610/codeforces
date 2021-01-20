#include <bits/stdc++.h>
#define int long long

using namespace std;

/*const int n = 10000;
  bool prime[n];*/

bool isdiv(int s, int num){
  vector<int> divs;
  for (int i = 1; i <= s; i++)
    if (s % i == 0)
      divs.push_back(i);
  bool con = true;
  for (int i = 1; i < divs.size(); i++){
    if (divs[i] - divs[i-1] > s)
      con = false;
  }
  return con;
}

int solve(int d){
  int div1 = 1+d;
  while (true){
    if (isdiv(div1))
      break;
  }
  int div2 = div1+d;
  while (true){
    if (isdiv(div2))
      break;
  }
  return div1*div2;
}

int32_t main() {
  /*for(int i=2;i<=n;i++)
    prime[i]=true;
  for(int i=2;i<=n;i++)
    if(prime[i]){
	for(int j=2;i*j<=n;j++)
	  prime[i*j]=false;
	  }*/
  int t; cin >> t;
  while (t--){
    int d; cin >> d;
    int ans = solve(d);
    cout << ans << endl;
  }
  return 0;
}

