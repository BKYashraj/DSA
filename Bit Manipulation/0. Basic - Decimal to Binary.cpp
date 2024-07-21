#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
  string ele = "";
  int digit = 1125;
  while (digit >= 1){
    if (digit % 2 != 0)
      ele += "1";
    else
      ele += "0";
    digit /= 2;
  }
  reverse(ele.begin(), ele.end());
  cout << ele;
}
