#include <iostream>
#include <string>
#include <vector>
using namespace std;

int gcd(int a, int b){

  int count = 0;

  for (int i = 1; i <= a; i++){

    if ((a % i == 0 && b % i == 0) true){
      count++;
    }
    
  }

  return count;
  
}

int main() {

  string count;
  getline(cin, count);
  int counts = stoi(count);

  vector<int> maxAll;
  
  for (int i = 0; i < counts; i++){

    string number;
    getline(cin, number);
    int num = stoi(number);

    int maxNums = 1;
    for (int j = 1; j <= num; j++){

      for (int k = 1; k <= num; k++){
	cout << j << " " << k << " " << maxNums << endl;
	if (gcd(j, k) > maxNums){
	  maxNums = gcd(j, k);
	}
	
      }
      
    }

    cout << maxNums << endl;
    // maxAll.push_back(maxNums);
    
  }

  // for (int i = 0; i < maxAll.size(); i++){

  //   cout << maxAll[i] - 1 << endl;
    
  // }
  
  return 0;

}
