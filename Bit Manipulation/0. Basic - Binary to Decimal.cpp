#include <iostream>
using namespace std;
int main(){
  string ele = "1111";
  int digit = 0;
  int n = ele.size();
  int p2 = 1;
  for (int i = n - 1; i >= 0; i--){
    if (ele[i] == '1'){
      digit += p2;
      p2 *= 2;
    }
    else continue;
  }
  cout << digit;
}
