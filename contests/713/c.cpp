#include <bits/stdc++.h>
#define int long long

using namespace std;

int32_t main() {
  int t; cin >> t;
  while (t--){
    int a, b;
    cin >> a >> b;
    string s;
    cin >> s;
    bool con = true;
    int n = s.size(), ch=0;
    if (n % 2 == 1 && s[n/2] == '?'){
      if (a % 2 == 1){
	s[n/2] = '0';
      }
      else if (b % 2 == 1){
	s[n/2] = '1';
      }
      else{
	cout << -1 << endl;
	continue;
      }
    }
    for (int i = 0; i < n; i++){
      int ind = n-i-1;
      if (s[i] == s[ind]){
	if (s[i] == '0')
	  a--;
	else if (s[i] == '1')
	  b--;
	else{
	  ch++;
	}
      }
      else if (s[i] == '?'){
	if (s[ind] == '1'){
	  s[i] = '1';
	  b--;
	}
	else{
	  s[i] = '0';
	  a--;
	}
      }
      else if (s[ind] == '?'){
	if (s[i] == '1'){
	  s[ind] = '1';
	  b--;
	}
	else{
	  s[ind] = '0';
	  a--;
	}
      }
      else
	con = false;      
    }
    //cout << a << ' ' << b << endl;
    for (int i = 0; i < n ; i++){
      int ind = n-i-1;
      if (s[i] == '?'){
	if (a > 0){
	  s[i] = s[ind] = '0';
	  a-=2;
	}
	else{
	  s[i] = s[ind] = '1';
	  b-=2;
	}
      }
    }
    if (con == false || a != 0 || b != 0)
      cout << -1 << endl;
    else
      cout << s << endl;
  }
  return 0;
}

