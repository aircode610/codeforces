#include <bits/stdc++.h>
#define int long long 

using namespace std;

const int M = 1e5+10;
int a[M];

void clear(int n){
  fill(a+1, a+n+1, 0);
}

int32_t main() {
  int t; cin >> t;  
  while (t--){
    int n; cin >> n;
    clear(n);
    for (int i = 1; i <= n; i++)
      cin >> a[i];
    int last=0, c=-1, m=-1, lastDif=0;
    bool isArb = true, isPos = true;
    for (int i = 1; i <= n; i++){
      if (i == 1){
	last = a[i];
	continue;
      }
      
      if (i == 2)
	lastDif = a[i]-last;
      else if (a[i]-last != lastDif)      
	isArb = false;
      
      if (last <= a[i])
	c = a[i]-last;
      
      last = a[i];
    }
    
    if (isArb == true){
      cout << 0 << endl;
      continue;
    }
    
    if (c != -1){
      for (int i = 1; i <= n; i++){
	if (i == 1){
	  last = a[i];
	  continue;
	}

	if (last > a[i] && m == -1)
	  m = last+c-a[i];

	last = a[i];
      }
      if (m == -1)
	isPos = false;
      //cout << c << endl;
      if (a[1] > m)
	isPos = false;
      for (int i = 1; i <= n; i++){
	if (i == 1){
	  last = a[i];
	  continue;
	}

	//cout << (last+c)%m << endl;
	if ((last+c)%m != a[i])
	  isPos = false;
	last = a[i];
      }
      
      if (isPos == true && m != -1)
	cout << m << ' ' << c << endl;
      else
	cout << -1 << endl;
    }
    else
      cout << -1 << endl;
  }
  return 0;
}
