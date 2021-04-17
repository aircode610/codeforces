#include <bits/stdc++.h>
#define int long long

using namespace std;

const int M = 1e5+10, INF = 1e18+10;

int c[M];

void clear(int n){
  fill(c+1, c+n+1, 0);
}

int32_t main(){
  int t; cin >> t;
  while (t--){
    int n; cin >> n;
    clear(n);
    for (int i = 1; i <= n; i++)
      cin >> c[i];
    int answ = INF, minF = c[1], minZ = INF, sumAll = c[1];
    for (int i = 2; i <= n; i++){
      if (i % 2 == 0)
	minZ = min(minZ, c[i]);
      else
	minF = min(minF, c[i]);
      sumAll += c[i];
      //cout << sumAll << ' ' << minAll << endl;
      int fardha = (i+1)/2, zojha = i/2;
      answ = min(answ, sumAll+minF*(n-fardha)+minZ*(n-zojha));
      //cout << answ << endl; 
    }
    cout << answ << endl;
  }
  return 0;
}
