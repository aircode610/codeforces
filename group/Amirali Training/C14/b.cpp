#include <bits/stdc++.h>
#define int long long

using namespace std;

const int M = 1e5+10;
int t, n;
vector<int> ans, sec;
string a, b;

int32_t main() {
  cin >> t;
  while (t--){
    cin >> n;
    cin >> a >> b;
    a += '0';
    b += '0';
    ans.clear();
    sec.clear();
    for (int i = 1; i <= n; i++){
      if (a[i] != a[i-1])
	ans.push_back(i);
      if (b[i] != b[i-1])
	sec.push_back(i);
    }
    reverse(sec.begin(), sec.end());
    cout << ans.size()+sec.size() << ' ';
    for (int i = 0; i < ans.size(); i++)
      cout << ans[i] << ' ';
    for (int i = 0; i < sec.size(); i++)
      cout << sec[i] << ' ';
    cout << endl;
  }
  return 0;
}
