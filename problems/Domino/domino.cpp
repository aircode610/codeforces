#include <bits/stdc++.h>

using namespace std;

const int M = 100+10;

vector<pair<int, int> > g[M];
int n, cnt[M], mark[M];
deque<pair<int, char> > e;
set<int> seen, exists;

char oper(int a){
  if (a < 0)
    return '-';
  return '+';
}

void euler(int r, int d, char c){
  seen.insert(r);
  for (auto u:g[r]){
    char rotation = oper(u.second);
    int domino = abs(u.second);     
    if (!mark[domino]){
      mark[domino] = true;
      euler(u.first, domino, rotation);      
    }
  }
  if (d != -1)
    e.push_back({d, c});
}

int main() {
  cin >> n;
  int node;
  for (int i = 1; i <= n; i++){
    int u, v;
    cin >> u >> v;    
    node = u;
    exists.insert(u);
    exists.insert(v);
    g[u].push_back({v, i});
    g[v].push_back({u, -i});
    cnt[u]++;
    cnt[v]++;
  }

  vector<int> odd;
  for (int i = 0; i <= 6; i++){
    if (cnt[i] % 2 == 1){
      odd.push_back(i);
    }
  }

  if (odd.size() == 2){
    euler(odd[0], -1, ' ');
  }
  else if (odd.size() == 0){
    euler(node, -1, ' ');
  }
  else{
    cout << "No solution" << endl;
    return 0;
  }

  if (exists.size() != seen.size())
    return cout << "No solution" << endl,0;
  
  for (int i = e.size()-1; i >= 0; i--)
    cout << e[i].first << ' ' << e[i].second << endl;
  
  return 0;
}
