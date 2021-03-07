#include <bits/stdc++.h>
#define int long long
#define FAST ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

using namespace std;

struct node{
  int left;
  int right;
  int minVal;
  int lazy;
};

const int M = 1e6;
int n, a[M];
node st[M];

void build(int i, int l, int r){
  st[i].left = l;
  st[i].right = r;
  if (l == r){
    st[i].minVal = a[l];
    //cout << st[i].minVal << endl;
    return ;
  }
  int mid = (l+r)/2;
  build(2*i, l, mid);
  build(2*i+1, mid+1, r);
  st[i].minVal = min(st[2*i].minVal, st[2*i+1].minVal);
  //cout << st[i].minVal << endl;
}

void push_lazy(int i){
  st[i].minVal += st[i].lazy;
  st[2*i].lazy += st[i].lazy;
  st[2*i+1].lazy += st[i].lazy;
  st[i].lazy = 0;
}

int query(int i, int l, int r){
  push_lazy(i);
  if (st[i].left == l && st[i].right == r)
    return st[i].minVal;
  int mid = (st[i].left+st[i].right)/2;
  if (r <= mid)
    return query(2*i, l, r);
  if (l > mid)
    return query(2*i+1, l, r);
  return min(query(2*i, l, mid), query(2*i+1, mid+1, r));
}

void update(int i, int l, int r, int x){
  push_lazy(i);
  if (l == st[i].left && r == st[i].right){
    st[i].minVal += x;
    if(st[i].left!=st[i].right)
      {
	st[2*i].lazy+=x;
	st[2*i+1].lazy+=x;
      }
    return;
  }
  int mid = (st[i].left+st[i].right)/2;
  if (mid >= r)
    update(2*i, l, r, x);
  else if (mid < l)
    update(2*i+1, l, r, x);
  else {
    update(2*i, l, mid, x);
    update(2*i+1, mid+1, r, x);
  }
  push_lazy(2*i);
  push_lazy(2*i+1);
  st[i].minVal = min(st[2*i].minVal, st[2*i+1].minVal);
}

int32_t main() {
  FAST;
  cin >> n;
  for (int i = 1; i <= n; i++)
    cin >> a[i];
  build(1, 1, n);

  int q;
  cin >> q;
  string line;
  getline(cin, line);
  for (int i = 1; i <= q; i++){    
    getline(cin, line);
    int cnt = 1, arr[4];
    stringstream ss(line);
    string c;
    while (ss >> c && cnt <= 3){
      arr[cnt] = stoi(c)+1;
      cnt++;
    }
    arr[3]--;
    cnt--;
    if (cnt == 2){
      if (arr[2] >= arr[1])
	cout << query(1, arr[1], arr[2]) << endl;
      else
	cout << min(query(1, arr[1], n), query(1, 1, arr[2])) << endl;
    }
    else{
      if (arr[2] >= arr[1])
	update(1, arr[1], arr[2], arr[3]);
      else{
	update(1, arr[1], n, arr[3]);
	update(1, 1, arr[2], arr[3]);
      }
    }
  }
  return 0;
}
