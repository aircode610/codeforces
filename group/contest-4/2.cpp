#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

  long long n, m, k;
  cin >> n >> m >> k;

  long long maxEmote = 0;
  long long maxEmote2 = 0;
  
  for (int i = 0; i < n; i++){
    long long e;
    cin >> e;

    if (e > maxEmote){
      int temp = maxEmote;
      maxEmote = e;
      maxEmote2 = temp;
    }
    else if (e > maxEmote2){
      maxEmote2 = e;
    }
    
  }
  
  long long sumEmotes = 0;
  long long tempK = k;
  
  sumEmotes += maxEmote * k

  cout << sumEmotes << endl;
  
  return 0;
  
}
