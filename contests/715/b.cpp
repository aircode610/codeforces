#include <bits/stdc++.h>
#define int long long

using namespace std;

int32_t main() {
  int t; cin >> t;
  while (t--){
    //input
    int n; cin >> n;
    string s; cin >> s;
    bool con = true;
    //check from left
    int cntT=0, cntM=0;
    for (int i = 0; i < s.size(); i++){
      if (s[i] == 'M')
	cntM++;
      else
	cntT++;
      if (cntT < cntM)
	con = false;
    }
    if (cntM != cntT/2)
      con = false;
    // check from right
    cntT=0, cntM=0;
    for (int i = s.size()-1; i >= 0; i--){
      if (s[i] == 'M')
	cntM++;
      else
	cntT++;
      if (cntT < cntM)
	con = false;
    }
    //check if yes or no
    if (con)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
  return 0;
}
