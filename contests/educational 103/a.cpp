#include<bits/stdc++.h>

using namespace std;

#define int long long
#define FAST ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int M=1e5+10;

int32_t main()
{
  FAST;
  int t; cin >> t;
  while (t--){
    int n, k;
    cin >> n >> k;
    int cnt = 1;
    if (n > k){
      while (n > k*cnt){
	cnt++;
      }
      k *= cnt;
    }    
    cnt = 1;
    while (cnt*n < k){
      cnt++;
    }
    cout << cnt << endl;
  }
  return 0;
}
