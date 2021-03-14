#include <bits/stdc++.h>
#define int long long

using namespace std;

const int M = 2e5+10;
int a[M], b[M], all, n, m;

int gcd(int a, int b){
  if (b == 0)
    return a;
  else
    return gcd(b, a%b);
}

int32_t main() {
  cin >> n >> m;
  for (int i = 1; i <= n; i++)
    cin >> a[i];
  for (int i = 1; i <= m; i++)
    cin >> b[i];
  
  for (int i = 2; i <= n; i++){
    int num = a[i]-a[1];
    if (num < 0)
      num *= -1;
    all = gcd(all, num);
  }
  
  for (int i = 1; i <= m; i++)
    cout << gcd(all, a[1]+b[i]) << ' ';
  cout << endl;
  
  return 0;
}
