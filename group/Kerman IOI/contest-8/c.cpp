#include <bits/stdc++.h>
#define int long long

using namespace std;

const int M = 3e5 + 10;
int arr[M], ans, dp[M];

int32_t main() {

  int n; cin >> n;
  for (int i = 1; i <= n; i++)
    cin >> arr[i];

  for (int i = 1; i <= n; i++){
    dp[i] = dp[i-1]^arr[i];
  }
  
  for (int i = 1; i <= n; i++){
    int l = i;
    for (int j = i+1; j <= n; j++){
      int r = j;
      if ((r-l+1) % 2 == 0){
	int mid = (l+r-1)/2;
	if ((dp[mid-l]) == (dp[r-(mid+1)]))
	  cout << dp[mid-l] << endl;
      }
    }
    
  }

  cout << ans << endl;
  
  return 0;
}
