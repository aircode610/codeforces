#include <bits/stdc++.h>
#define INF 1e6;

using namespace std;

int main() {

  int n, m;
  cin >> n >> m;

  string emp = "";
  for (int i = 0; i < m+2;i++){
    emp += '0';
  }
  string floors[n];
  string input; cin >> input;
  int count = 0;
  while (input == emp){    
    count++;
    if (count == n){
      cout << 0 << endl;
      return 0;
    }
    cin >> input;       
  }
  floors[0] = input;
  n -= count;
  for (int i = 1; i < n; i++){
    cin >> input;
    floors[i] = input;
  }

  int ans = INF;
  for (int mask = 0; mask <= (1<<(n-1))-1; mask++){
    int cur=0, way=0, mv=0;
    for (int i = n-1; i > 0; i--){
      //cout << mask << ' ' << i << endl;
      int next = (mask&(1<<mv++));
      if (next > 1)
	next = 1;
      if (cur != next){
	way += m+2;
	cur = next;	
      }
      else {
	if (cur == 0){
	  int cnt=0, ind=m+1;
	  while (floors[i][ind--] == '0' && ind >= 0)
	    cnt++;
	  if (cnt == m+2)
	    way += 1;
	  else
	    way += (m+1-cnt)*2+1;
	}
	else {
	  int cnt=0, ind=0;
	  while (floors[i][ind++] == '0' && ind < m+2)
	    cnt++;
	  if (cnt == m+2)
	    way += 1;
	  else
	    way += (m+1-cnt)*2+1;
	}
      }      
    }
    if (cur == 0){
      int cnt=0, ind=m+1;
      while (floors[0][ind--] == '0' && ind >= 0)
	cnt++;
      way += m+1-cnt;
      //cout << cur << ' ' << cnt << endl;
    }
    else {
      int cnt=0,ind=0;
      while (floors[0][ind++] == '0' && ind < m+1)
	cnt++;
      way += m+1-cnt;
      //cout << cur << ' ' << cnt << endl;
    }
    //cout << mask << ' ' << way << endl;
    //cout << mask << ' '   << way << endl;
    ans = min(ans, way);
  }
  
  cout << ans << endl;
  
  return 0;
}
