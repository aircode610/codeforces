#include <bits/stdc++.h>
#define int long long

using namespace std;

const int M = 1e6+10;
int A, B, C, D, ans, a[M];

int32_t main() {
  cin >> A >> B >> C >> D;
  for (int i = A; i <= B; i++){
    a[i+B]++;
    a[i+C+1]--;
  }
  for (int i = 1; i < M; i++)
    a[i] += a[i-1];
  for (int i = 1; i < M; i++)
    a[i] += a[i-1];
  for (int i = C; i <= D; i++)
    ans += a[M-1]-a[i];
  cout << ans << endl;
  return 0;
}

