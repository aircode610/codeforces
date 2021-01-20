#include <bits/stdc++.h>
#define int long long

using namespace std;
vector<int> d, bb;
void solve(int n){;
  int last = 0;
  for (int i = 0; i < n; i++){
    if (last == 0){
      d.push_back(1);
      last = bb[i] + 1;
    }
    else if (last == 1){
      if (bb[i] == 1){
	d.push_back(1);
	last = 2;
      }
      else{
	d.push_back(0);
	last = 0;
      }
    }
    else {
      if (bb[i] == 0){
	d.push_back(1);
	last = 1;
      }
      else{
	d.push_back(0);
	last = 1;
      }
    }
  }
}

int32_t main() {
  int t; cin >> t;
  while (t--){
    int n; cin >> n;
    string b; cin >> b;
    for (int i = 0; i < b.size(); i++){
      if (b[i] == '0')
	bb.push_back(0);
      else
	bb.push_back(1);
    }
    solve(n);
    bb.clear();
    string a = "";
    for (int i = 0; i < d.size(); i++){
      if (d[i] == 0)
	a += "0";
      else if (d[i] == 1)
	a += "1";
      else
	a += "2";
    }
    cout << a << endl;
    d.clear();
  }
  return 0;
}
