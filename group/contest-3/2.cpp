#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

int main() {

  int h, w;
  cin >> h >> w;

  char grid[h][w];

  for (int i = 0; i < h; i++){
    for (int j = 0; j < w; j++){
      grid[i][j] = ' ';
    }
  }

  vector<int> r {0 ,3, 1};
  vector<int> c{0,2,3,0};
  
  for (int i = 0; i < h; i++){
    for (int j = 0; j < r[i]; j++){
      grid[i][j] = '-';
      if (r[i] < h){
	grid[i][j + 1] = '*';
      }
    }
  }

  for (int i = 0; i < w; i++){
    for (int j = 0; j < c[i]; j++){
      grid[i][j] = '-';
      if (c[i] < w){
	grid[i][j + 1] = '*';
      }
    }
  }

  int count = 0;

  for (int i = 0; i < h; i++){
    for (int j = 0; j < w; j++){
      if (grid[i][j] == ' '){
	count++;
      }
    }
  }

  if (count == 0){
    cout << 0;
  }else {
    long long ans = 1;
    for (int i = 0; i < count; i++){
      ans *= 2;
    }
  
    cout << ans % 1000000007;
  }
  
  return 0;
  
}
