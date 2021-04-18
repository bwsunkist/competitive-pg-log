#include<iostream>
#include<vector>
#include<cstdio>
#include<string>
#include<algorithm>
#include<climits>
using namespace std;

void dfs(long long x, long long  size,long long *cnt){

  if(x == size){
    *cnt = *cnt +1;
    cout << "c++ >> " << *cnt << endl; 
    cout << "ゴール到達" << endl;
    return;
  }

   if(x <= size-2){
    cout << "dfs(" << x << "," << *cnt << ")" << endl;
    cout << "x+2" << endl;
    dfs(x+2, size, cnt);
  }else{
    cout << "もう二段飛びは無理 " << endl;
  }

      
  if(x < size){
    cout << "dfs(" << x << ","  << *cnt << ")" << endl;
    cout << "x+1" << endl;
    dfs(x + 1, size, cnt);
  }else{
    cout << "なにかおかしい" << endl;
  }

}


int main() {
  long long ans=0;
  long long  x=0;
  long long  cnt=0;
  long long size =0;
  
  cin >> size;
  dfs(0, size,  &cnt);

  cout << "Answer = " << cnt << endl;

}
