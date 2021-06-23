#include <iostream>
#include <vector>

using namespace std;

int sqr(int num){
  return num * 2;
}

int main() {

  int n, l, r;
  cin >> n >> l >> r;

  int minSum = 0;
  int maxSum = 0;

  int num = 1;
  for (int i = 1; i <= n - (l - 1); i++){
    minSum += num;
  }
  for (int i = 1; i <= l - 1; i++){
    num = sqr(num);
    minSum += num;
  }

  num = 1;
  for (int i = 1; i <= r - 1; i++){
    maxSum += num;
    num = sqr(num);
  }
  for (int i = 1; i <= n - (r - 1); i++){
    maxSum += num;
  }

  cout << minSum << " " << maxSum << endl;
  
  return 0;
  
}
