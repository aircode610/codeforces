#include <bits/stdc++.h>
#define int long long

using namespace std;

const int M = 26+10;
int ezafa[M], ezafb[M], cnta[M], cntb[M];

void clear() {
  fill(ezafa, ezafa+27, 0);
  fill(ezafb, ezafb+27, 0);
  fill(cnta, cnta+27, 0);
  fill(cntb, cntb+27, 0);
}

bool solve() {
  clear();
  int n, k;
  cin >> n >> k;
  string a, b;
  cin >> a >> b;
  for (int i = 0; i < a.size(); i++){
    int num = a[i]-'a';
    cnta[num]++;
    num = b[i]-'a';
    cntb[num]++;
  }
  for (int i = 0; i < 26; i++){
    ezafa[i] = cnta[i]%k;
    cnta[i] /= k;
    ezafb[i] = cntb[i]%k;
    cntb[i] /= k;
  }
  for (int i = 0; i < 26; i++)
    if (ezafa[i] != ezafb[i])
      return false;
  for (int i = 0; i < 26; i++){
    for (int j = 0; j <= i; j++){
      if (cntb[i] == 0)
	break;
      if (cnta[j] >= cntb[i]){
	cnta[j] -= cntb[i];
	cntb[i] = 0;
      }
      else {
	cntb[i] -= cnta[j];
	cnta[j] = 0;
      }
    }
  }
  for (int i = 0; i < 26; i++)
    if (cntb[i] != 0 || cnta[i] != 0)
      return false;
  return true;
}

int32_t main() {
  int t; cin >> t;
  while (t--){
    if (solve() == true)
      cout << "Yes" << endl;
    else
      cout << "No" << endl;
  }
  return 0;
}
