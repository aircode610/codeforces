#include <bits/stdc++.h>
#define int long long

using namespace std;

const int M = 50000;
int t, n;

bool prime(int a) {
  for (int i = 2; i < min(a, M); i++)
    if (a % i == 0)
      return false;
  return true;
}

int32_t main() {
  cin >> t;
  while (t--){
    cin >> n;
    int div = n;
    while (div % 2 == 0){
      div /= 2;
    }
    if (n == 1)
      cout << "FastestFinger" << endl;
    else if (n % 2 == 1 || n == 2)
      cout << "Ashishgup" << endl;
    else if (div == 1)
      cout << "FastestFinger" << endl;
    else {
      if (n % 4 == 0)
	cout << "Ashishgup" << endl;
      else if (prime(div))
	cout << "FastestFinger" << endl;
      else
	cout << "Ashishgup" << endl;
    }
  }
  return 0;
}
