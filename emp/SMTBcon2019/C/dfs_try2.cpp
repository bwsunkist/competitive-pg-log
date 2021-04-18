#include<iostream>
#include<vector>
#include<cstdio>
#include<string>
#include<cmath>
#include<math.h>
#include<algorithm>
#include<string.h>
#include <iomanip>
#include <sstream>
using namespace std;

const int S = 10;
int dp[1000][S][S][S][S][S];

void dfs(int x, int y, int z, int l, int m, int n, int *cnt, int X, int minn){
    const int SIZE = minn;
    const int GOAL = X;

  //ゴールについたら終了
  if(1*y+2*z+3*l+4*m+5*n == GOAL){
    *cnt=*cnt+1;
    // cout << "goal!!" << endl;
    return;
  }else if(x == 0){
    return;
  }


  if(n<SIZE){
    dfs(x-1,y,z,l,m,n+1,cnt, X, minn);
  }else{
    return;
  }
  if(m<SIZE){
    dfs(x-1,y,z,l,m+1,n,cnt, X, minn);
  }else{
    return;
  }
  if(l<SIZE){
    dfs(x-1,y,z,l+1,m,n,cnt, X, minn);
  }else{
    return;
  }
  if(z<SIZE){
    dfs(x-1,y,z+1,l,m,n,cnt, X, minn);
  }else{
    return;
  }
  if(y<SIZE){
    dfs(x-1,y+1,z,l,m,n,cnt, X, minn);
  }else{
    return;
  }

}


int main(void) {
  int cnt=0;
  int X = 0;
  int ans = 0;

//  cout << dp[0][0][0][0][0][1] << endl;
  // cout << dp[MS] << endl;

  cin >> X;
  int minn = X/100;
  int maxx = minn*105;
  cout << "minn = " << minn << endl;
  cout << "maxx = " << maxx<< endl;
  cout << "calc = " << maxx - X<< endl;

  if(X > maxx){
    ans = 0;
  }else{
    int calc = maxx - X;
    dfs(minn,0,0,0,0,0,&cnt, calc, minn);
  }

  if(cnt > 0){
    ans++;
  }

  cout << ans << endl;

  return 0;
}
