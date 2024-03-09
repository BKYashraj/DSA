#include <iostream>
using namespace std;
void printmazepath(int row, int col, string str){
  if (row < 1 || col < 1) return;
  if (row == 1 && col == 1){
    cout<<str<<endl;
    return;
  }
  printmazepath(row, col - 1,str+"R");
  printmazepath(row - 1, col,str+"D");
}

int main()
{
  printmazepath(3,3,"");
}
