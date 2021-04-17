#include <bits/stdc++.h>
#define int long long

using namespace std;

int getSum(int a){
  int ret = 0;
  while (a != 0){
    ret += a % 10;
    a /= 10;
  }
  return ret;
}

int getG(int dig, int num){
  for (int i = 2; i <= dig; i++){
    if (dig % i == 0 && num % i == 0)
      return true;
  }
  return false;
}

int32_t main() {
  int t; cin >> t;
  while (t--){
    int n; cin >> n;
    while (true){
      int sumD = getSum(n);
      //cout << sumD << endl;
      if (getG(sumD, n) == true){
	cout << n << endl;
	break;
      }
      n++;
    }
  }
  return 0;
}
