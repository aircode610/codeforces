#include <bits/stdc++.h>
#define int long long

using namespace std;

const int M = 1e9 + 10;

int pw(int b){
  int p = 1;
  for (int i = 1; i <= b; i++){
    p *= 2;
  }
  if (b == 0)
    return 0;
  else
    return p;
}

int32_t main() {
  int n; cin >> n;
  int cnt=0, num=0;
  while (n != 0){
    if (n % 10 == 7)
      num |= (1<<cnt);
    cnt++;
    n /= 10;
  }

  int ans = num + 1;
  for (int i = 1; i <= cnt-1; i++)
    ans += pw(i);

  cout << ans << endl;
  
  return 0;
}
