#include <iostream>
using namespace std;
int mazepath(int row, int col){
  if (row < 1 || col < 1) return 0;
  if (row == 1 && col == 1) return 1;
  int rightways = mazepath(row, col - 1);
  int downways = mazepath(row - 1, col);
  return rightways + downways;
}
int main(){
  cout << mazepath(3, 4);
}
