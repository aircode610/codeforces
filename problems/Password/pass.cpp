#include<bits/stdc++.h>

using namespace std;

#define int long long
#define hash adfasdfasf

const int M=1e6+10,MOD=99999989,p=557;
int pp[M],ipp[M],ph[M];
string s;

int pw(int a,int b) {
  if(b==0LL)return 1LL;
  int p=pw(a,b/2LL);
  if(b%2LL==0LL)
    return p*p %MOD;
  return p*p %MOD * a %MOD;
}
int modinv(int a) {
  return pw(a,MOD-2);
}
int hashSub(int l,int r) {
  return ((ph[r]-ph[l-1]+MOD)*ipp[l])%MOD;
  //s[l]*p^l+s[l+1]*p^(l+1)+...+s[r]*p^r;
}

bool check(int k){
  for (int i = 2; i < s.size()-k;i++){
    if (hashSub(i, i+k-1) == hashSub(1, k)){
      return true;
    }
  }
  return false;
}

int32_t main()
{
  cin>>s;
  s='.'+s;
  pp[0]=1;
  for(int i=1;i<M;i++){
    (pp[i]=pp[i-1]*p)%=MOD;
    ipp[i]=modinv(pp[i]);
  }
  for(int i=1;i<s.size();i++)
    (ph[i]=ph[i-1]+s[i]*pp[i])%=MOD;

  vector<int> answers;
  for (int i = 1; i < s.size(); i++){
    int hp = hashSub(1, i);
    int hs = hashSub(s.size()-i, s.size()-1);
    if (hp == hs){
      answers.push_back(i);
    }
  }
  sort(answers.begin(), answers.end());
  int l=0, r=answers.size(), mid;
  while (r-l>1){
    mid = (r+l)/2;
    int k = answers[mid];
    //cout << k << endl;    
    if (check(k))
      l = mid;
    else
      r = mid;
  }
  //cout << answers[l] << endl;
  if (!check(answers[l]))
    cout << "Just a legend" << endl;
  else
    cout << s.substr(1, answers[l]) << endl;
  return 0;
}

