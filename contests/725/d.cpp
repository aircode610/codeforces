#include <bits/stdc++.h>
#define int long long

using namespace std;

int primeFactors(int n)
{
  int ret = 0;
  while (n % 2 == 0)
    {
      ret++;
      n = n/2;
    }
 
  for (int i = 3; i <= sqrt(n); i = i + 2)
    {
      while (n % i == 0)
        {
	  ret++;
	  n = n/i;
        }
    }

  if (n > 2)
    ret++;
  return ret;
}

int32_t main() {
  int t; cin >> t;
  while (t--){
    int a, b, k;
    cin >> a >> b >> k;
    if (k == 1){
      if (a % b != 0 && b % a != 0)
	cout << "NO" << endl;
      else if (a == b)
	cout << "NO" << endl;
      else
	cout << "YES" << endl;
      continue;
    }
    int ans = primeFactors(a) + primeFactors(b);
    if (k <= ans)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
  return 0;
}
