#include <bits/stdc++.h>

using namespace std;

bool check(string a, string b, string in){
  bool con = true;
  for (int i = 0; i < a.size(); i++){
    if (in[i] != a[i])
      return false;
  }
  for (int i = 0; i < b.size(); i++){
    if(in[in.size()-(b.size()-i-1)-1] != b[i])
      return false;
  }
  return true;
}

int main() {
  string perms[5][2] = {{"2","020"},{"20","20"},{"202","0"},{"2020",""},{"","2020"}};
  int tests; cin >> tests;
  for (int test = 1; test <= tests; test++){
    int len; cin >> len;
    string input; cin >> input;
    bool con = false;
    for (int i = 0; i < 5; i++){
      if (check(perms[i][0], perms[i][1], input) == true){
	con = true;
	break;
      }
    }
    if (con == true)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
}
