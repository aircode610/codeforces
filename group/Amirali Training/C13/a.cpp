#include <bits/stdc++.h>
#define int long long

using namespace std;

const int M = 200+10;
int n, m, a[M], b[M];

bool check(int num){
  bool ret = true;
  for (int i = 1; i <= n; i++){
    bool con = false;
    for (int j = 1; j <= m; j++)
      if (((a[i]&b[j]) | num) == num)
	con = true;
    if (con == false)
      ret = false;
  }
  return ret;
}

int32_t main() {
  cin >> n >> m;
  for (int i = 1; i <= n; i++)
    cin >> a[i];
  for (int i = 1; i <= m; i++)
    cin >> b[i];

  for (int i = 0; i <= 512; i++){
    if (check(i)){
      cout << i << endl;
      break;
    }
  }
  return 0;
}
