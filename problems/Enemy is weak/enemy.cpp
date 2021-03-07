#include <bits/stdc++.h>
#define int long long

using namespace std;

struct node{
  int left;
  int right;
  int sum;
};

const int M = 3e6+50;
int n, ans;
node st[M];
vector<pair<int, int> > army;

void build(int i, int l, int r){
  st[i].left = l;
  st[i].right = r;
  if (l == r){
    st[i].sum = 0;
    return ;
  }
  int mid = (l+r)/2;
  build(2*i, l, mid);
  build(2*i+1, mid+1, r);
  st[i].sum = st[2*i].sum + st[2*i+1].sum;
}

int query(int i, int l, int r){
  if (st[i].left == l && st[i].right == r)
    return st[i].sum;
  int mid = (st[i].left+st[i].right)/2;
  if (r <= mid)
    return query(2*i, l, r);
  if (l > mid)
    return query(2*i+1, l, r);
  return query(2*i, l, mid) + query(2*i+1, mid+1, r);
}

void update(int i, int ind){
  if (st[i].left == st[i].right){
    st[i].sum = 1;
    return ;
  }
  int mid = (st[i].left+st[i].right)/2;
  if (ind <= mid)
    update(2*i, ind);
  else
    update(2*i+1, ind);
  st[i].sum++;
}

int32_t main() {
  cin >> n;  
  army.push_back({0, 0});
  for (int i = 1; i <= n; i++){
    int inp; cin >> inp;
    army.push_back({inp, i});
  }

  build(1, 1, n);
  sort(army.begin(), army.end());
  for (int i = 1; i <= n; i++){
    int bigger = army[i].second-query(1, 1, army[i].second)-1;
    int smaller = query(1, army[i].second, n); 
    ans += bigger*smaller;
    update(1, army[i].second);
  }
  cout << ans << endl;
  return 0;
}
