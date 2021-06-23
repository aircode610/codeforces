#include <bits/stdc++.h>
#define int long long

using namespace std;

int n;

int check(int l, int sm){
  int temp;
  cout << "? " + to_string(l) + ' ' + to_string(sm) << endl;
  cin >> temp;
  return temp;
}

int32_t main() {
  cin >> n;  
  int l=1, r=n, mid, sm, temp;
  cout << "? " + to_string(l) + ' ' + to_string(r) << endl;
  cin >> sm;  
  if (sm > l && sm == check(l, sm)){ //on the left side
    r = sm;
    while (r-l > 1){
      mid = (l+r)/2;
      cout << "? " + to_string(mid) + ' ' + to_string(sm) << endl;
      cin >> temp;
      if (temp == sm)
	l = mid;
      else
	r = mid;
    }
    cout << "! " << l << endl;
  }
  else{ //on the right side
    l = sm;
    while (r-l > 1){
      mid = (r+l)/2;
      cout << "? " + to_string(sm) + ' ' + to_string(mid) << endl;
      cin >> temp;
      if (temp == sm)
	r = mid;
      else
	l = mid;
    }
    cout << "! " << r << endl;
  }
  return 0;
}

