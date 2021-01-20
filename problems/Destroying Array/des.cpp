#include <bits/stdc++.h>
#define int long long
#define destroy asasdf

using namespace std;

const int M = 1e5+10;
int par[M], a[M], w[M], des[M];
vector<int> destroy, answers;

int root(int v){
  if (par[v] == v)
    return v;
  return par[v]=root(par[v]);
}

void join(int v, int u){
  int rv = root(v), ru = root(u);
  if (ru == rv)
    return ;
  par[rv] = par[ru];
  w[ru] += w[rv];
}

int32_t main(){
  int n; cin >> n;
  for (int i = 1; i <= n; i++){
    cin >> a[i];
    par[i] = i;
    w[i] = a[i];
  }
  for (int i = 1; i <= n; i++){
    int d; cin >> d;
    destroy.push_back(d);
  }
  reverse(destroy.begin(), destroy.end());
  int ans = 0;
  answers.push_back(ans);
  fill(des, des+M, -1);
  for (int i = 0; i < destroy.size(); i++){
    int ind = destroy[i];
    des[ind] = a[i];
    if (des[ind-1] != -1)
      join(ind-1, ind);
    if (des[ind+1] != -1)
      join(ind+1, ind);
    ans = max(ans, w[ind]);
    answers.push_back(ans);
  }
  answers.pop_back();
  reverse(answers.begin(), answers.end());  
  for (int i = 0; i < answers.size(); i++)
    cout << answers[i] << endl;
  return 0;
}
