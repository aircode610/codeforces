#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

int sum(vector<int> v){
  int sum = 0;
  for (int i = 0; i < v.size(); i++){
    sum += v[i];
  }

  return sum;
}

int getMax(vector<int> v, int count){
  int sum = 0;

  for (int i = 0; i < count; i++){
    int maxElement = 0;
    for (int j = 0; j < v.size(); j++){
      if (v[j] > maxElement){
	maxElement = v[j];
      }
    }
    
    sum += maxElement;
    
    for (int j = 0; j < v.size(); j++){
      if (v[j] == maxElement){
	v[j] = 0;
	break;
      }
    }
  }

  return sum;
  
}

int maxSum(vector<int> v1, vector<int> v2, int k, int n){

  vector<int> bigger;
  vector<int> smaller;
  
  if (sum(v1) > sum(v2)){
    bigger = v1;
    smaller = v2;
  }else {
    bigger = v2;
    smaller = v1;
  }

  if (k == 0){
    return getMax(bigger, n);
  }
  
  return getMax(bigger, k) + getMax(smaller, n - k);
  
}

int main() {

  int t; cin >> t;

  for (int i = 0; i < t; i++){

    string str, str1, str2;
    getline(cin,str);
    getline(cin,str1);
    getline(cin,str2);
    istringstream iss(str);
    int val3;
    int n, k;
    iss >> n;
    iss >> k;
    cout << n;
    cout << k;
    istringstream iss1(str1);
    istringstream iss2(str2);

    vector<int> v1, v2;
    
    for (int j = 0; j < n; j++){
      int val;
      int val2;
      
      iss1 >> val;
      v1.push_back(val);

      iss2 >> val2;
      v2.push_back(val2);
    }

    cout << maxSum(v1, v2, k, n) << endl;
    
  }
  
  return 0;
  
}
