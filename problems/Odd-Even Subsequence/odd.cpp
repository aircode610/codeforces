#include <bits/stdc++.h>
#define int long long

using namespace std;

const int M = 2e5+10;
int n, k, a[M];
vector<int> sorteda;

bool check(int num, int start){
  int odds = 0, evens = 0;
  int cnt = start;
  for (int i = 1; i <= n; i++){
    if (cnt % 2 == 1 && a[i] <= num){
      odds++;
      cnt++;
    }
    else if (cnt % 2 == 0){
      cnt++;
      odds++;
    }
  }
  if (odds >= k)
    return true;
  
  cnt = start;
  for (int i = 1; i <= n; i++){
    if (cnt % 2 == 0 && a[i] <= num){
      evens++;
      cnt++;
    }
    else if (cnt % 2 == 1){
      cnt++;
      evens++;
    }
  }
  if (evens >= k)
    return true;
  
  return false;
}

int32_t main() {
  cin >> n >> k;
  for (int i = 1; i <= n; i++){
    cin >> a[i];
    sorteda.push_back(a[i]);
  }
  sort(sorteda.begin(), sorteda.end());
  int l = 0, r = n, mid;
  while (r-l>1){
    mid = (r+l)/2;
    if (check(sorteda[mid], 0) == true || check(sorteda[mid], 1) == true){
      //cout << "true!!!" << endl;
      r = mid;
    }
    else{
      //cout << "NOPE" << endl;
      l = mid;
    }
  }
  if (check(sorteda[r-1], 0) == true || check(sorteda[r-1], 1) == true)
    cout << sorteda[r-1] << endl;
  else
    cout << sorteda[r] << endl;
  return 0;
}
