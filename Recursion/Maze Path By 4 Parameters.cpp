#include<iostream>
using namespace std;
int mazepath(int sr,int sc,int er,int ec){
  if(sr > er || sc > ec) return 0;
  if(sr == er && sc == ec) return 1;
  int rightways = mazepath(sr,sc+1,er,ec);
  int downways = mazepath(sr+1,sc,er,ec);
  return rightways + downways;
}
int main(){
  cout<<mazepath(1,1,3,3);
}
