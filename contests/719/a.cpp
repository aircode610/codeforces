#include <bits/stdc++.h>
#define int long long

using namespace std;

int32_t main() {
  int t; cin >> t;
  while (t--){
    int n; cin >> n;
    string tasks; cin >> tasks;
    vector<char> done;
    bool con = true;
    char last = '!';
    for (int i = 0; i < tasks.size(); i++){
      char cur = tasks[i];
      if (cur != last){	
	for (int i = 0; i < done.size(); i++){
	  if (done[i] == cur){
	    //cout << done[i] << endl;
	    con = false;
	  }
	}
	done.push_back(cur);
      }
      last = cur;
    }
    if (con)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
  return 0;
}
