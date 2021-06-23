#include <bits/stdc++.h>
#define int long long

using namespace std;

pair<int, int> simple(int a, int b){
  int gcd = __gcd(a, b);
  a /= gcd;
  b /= gcd;
  return {a, b};
}

int32_t main() {
  int t; cin >> t;
  while (t--){
    int n; cin >> n;
    string s; cin >> s;
    int d=0, k=0;
    map<pair<int, int>, int> all;
    for (int i = 0; i < s.size(); i++){
      if (s[i] == 'D')
	d++;
      else
	k++;
      cout << ++all[simple(d, k)] << " ";
    }
    cout << endl;
  }
  return 0;
}
