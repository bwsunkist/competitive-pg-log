#include<iostream>
#include<vector>
#include<cstdio>
#include<string>
#include<algorithm>
using namespace std;

void dfs(int x, int y, int *cnt){
    const int SIZE = 2;

  //ゴールについたら終了
  if(x==2 && y==2){
    *cnt=*cnt+1;
    cout << "dfs(" << x << "," << y << "," << *cnt << ")" << endl;
    cout << "ゴール到達" << endl;
    return;
  }

  if(y<SIZE){
    cout << "dfs(" << x << "," << y << "," << *cnt << ")" << endl;
    cout << "y+1" << endl;
    dfs(x , y+1, cnt);
  }else{
    cout << "y方向ゴール到達" << endl;
  }
  

  if(x<SIZE){
    cout << "dfs(" << x << "," << y << "," << *cnt << ")" << endl;
    cout << "x+1" << endl;
    dfs(x+1 , y, cnt);
  }else{
    cout << "x方向ゴール到達" << endl;
  }

}


int main(void) {

  int x=0;//x座標
  int y=0;//y座標
  int cnt=0;

  dfs(0,0, &cnt);
  cout << "All Paturn : " << cnt << endl;

  return 0;
}

