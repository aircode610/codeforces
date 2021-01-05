#include <bits/stdc++.h>
#define INF 1e9

using namespace std;

int pw(int a){
  int ans = 1;
  for (int i = 1; i <= a; i++){
    ans *= 10;
  }
  return ans;
}

int main() {
  int t; cin >> t;  
  while (t--){
    int x; cin >> x;
    int ans = INF;
    for (int i = 1; i <= ((1<<10)-1); i++){
      int sumNums = 0;
      vector<int> answers;
      for (int j = 1; j <= 9; j++){
	if (((1<<(j-1))&i)){
	  answers.push_back(j);;
	  sumNums += j;
	}
      }
      if (sumNums == x){
	do { 
	  int num = 0;
	  for (int i = 0; i < answers.size(); i++)
	    num += pw(i)*answers[i];
	  ans = min(ans, num);
	} while (next_permutation(answers.begin(), answers.end()));
      }
    }
    if (ans == INF)
      cout << -1 << endl;
    else
      cout << ans << endl;
  }
  
  return 0;
}
