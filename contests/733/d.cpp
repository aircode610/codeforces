#include <bits/stdc++.h>
#define int long long
 
using namespace std;
const int M = 2e5+10, INF = 1e9+10;
int t, n, a[M], b[M];
bool mark[M];
 
void clear() {
  fill(mark, mark+n+1, false);
  fill(b, b+n+1, 0);
}
 
int32_t main() {
  cin >> t;
  while (t--){
    cin >> n;
    for (int i = 1; i <= n; i++)
      cin >> a[i];
    clear();
    int k = 0;
    for (int i = 1; i <= n; i++){
      if (!mark[a[i]]){
	k++;
	b[i] = a[i];
	mark[a[i]] = true;
      }
    }
    if (k == n-1){
      int nm = 0;
      for (int i = 1; i <= n; i++)
	if (!mark[i])
	  nm = i;      
      clear();
      b[nm] = a[nm];
      mark[a[nm]] = true;
      k = 0;
      for (int i = 1; i <= n; i++){
	if (!mark[a[i]]){
	  k++;
	  b[i] = a[i];
	  mark[a[i]] = true;
	}
      }
      for (int i = 1; i <= n; i++){
	if (b[i] == 0){
	  k++;
	  b[i] = nm;
	}
      }
      cout << k << endl;
      for (int i = 1; i <= n; i++)
	cout << b[i] << ' ';
      cout << endl;
      continue;
    }
    deque<int> notsat;
    for (int i = 1; i <= n; i++)
      if (b[i] == 0)
	notsat.push_back(i);
    reverse(notsat.begin(), notsat.end());
    for (int i = 1; i <= n; i++){
      if (!mark[i]){
	if (notsat[0] != i){
	  b[notsat[0]] = i;
	  notsat.pop_front();
	}
	else{
	  b[notsat[notsat.size()-1]] = i;
	  notsat.pop_back();
	}
      }
    }
    cout << k << endl;
    for (int i = 1; i <= n; i++)
      cout << b[i] << ' ';
    cout << endl;
  }
  return 0;
}
