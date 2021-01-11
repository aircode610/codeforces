#include <bits/stdc++.h>
#define int long long
#define INF 1e9

using namespace std;

void cal(int n, int x){
  int a[n];
  int maxAns = 0;
  int minAns = INF;
  for (int i = 0; i < n; i++)
    cin >> a[i];

  for (int i = 0; i < n; i++){    
    for (int j = 0; j < n; j++){
      int temp[n];
      for (int k = 0; k < n; k++)
	temp[k] = a[k];
      if (i != j){
	temp[i] += temp[j];
	temp[j] = 0;
      }
      int sumNums = 0;
      for (int k = 0; k < n; k++){
	sumNums += round(temp[k]/x);
	if (temp[k]%x != 0)
	  sumNums += 1;
      }
      //cout << sumNums << endl;
      maxAns = max(maxAns, sumNums);
      minAns = min(minAns, sumNums);
    }
  }

  cout << minAns << ' ' << maxAns << endl;
}

int32_t main() {

  int t; cin >> t;

  while (t--){
    int n;
    int x;
    cin >> n >> x;
    cal(n, x);
  }
  
  return 0;
}

