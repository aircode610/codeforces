#include <iostream>
#include <vector>

using namespace std;

int l, r, d;
vector<int> answers;
int len;

bool isBet(int l, int r, int n){
  if (n < l && n > r){
    return true;
  }
  return false;
}

void answer(int inputs[][3]){
  
  for (int i = 0; i < len; i++){
    int left = inputs[i][0];
    int right = inputs[i][1];
    int div = inputs[i][2];
    
    for (int j = 1;;j++){
      if (div * j < left){
	answers.push_back(div * j);
	break;
      }
      else {
	answers.push_back((right / div + 1) * div);
	break;
      }
    }
    
  }
  
}

int main() {

  int q;
  cin >> q;

  len = q;

  int inputs[q][3];
  int count = 0;
  
  while(q--){
    
    cin >> l >> r >> d;

    inputs[count][0] = l;
    inputs[count][1] = r;
    inputs[count++][2] = d;
    
  }
  
  answer(inputs);

  for (int i = 0; i < answers.size(); i++){
    cout << answers[i] << endl;
  }

  return 0;
  
}
