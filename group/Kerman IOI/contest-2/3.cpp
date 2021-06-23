#include <iostream>

using namespace std;

long long moves(int n) {

  long long sum = 0;

  for (long long i = 1; i <= n / 2; i++){
    sum += 8 * i * i;
  }

  return sum;
  
}

int main() {

  int t; cin >> t;
  
  for (int i = 0; i < t; i++){

    long long n; cin >> n;

    cout << moves(n) << endl;
    
  }
  
  return 0;
  
}
