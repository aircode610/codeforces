#include <bits/stdc++.h>

using namespace std;

int check(int a, int b, int c){
  if ((a < b && b > c) || (a > b && b < c))
    return 1;
  return 0;
}

int32_t main() {

  int t; cin >> t;

  while (t--){
    int n; cin >> n;
    int nums[n+1], cnt=0, del=0;
    for (int i = 1; i <= n; i++){
      cin >> nums[i];
    }
    for (int i = 2; i <= n-1; i++){
      if (check(nums[i-1], nums[i], nums[i+1]) == 1){
	cnt++;
      }
    }
    for (int i = 2; i <= n-1; i++){
      int con1 = check(nums[i-2], nums[i-1], nums[i]);
      int con2 = check(nums[i-1], nums[i], nums[i+1]);
      int con3 = check(nums[i], nums[i+1], nums[i+2]);
      if (i == 2)
	con1 = 0;
      if (i == n-1)
	con3 = 0;
      if (con2 == 0 && con1 == 1 && con3 == 1)
	con1 = 0;
      del = max(del, con1+con2+con3);
    }
    cout << cnt-del << endl;
  }
  
  return 0;
}
