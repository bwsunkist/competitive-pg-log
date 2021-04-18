#include<iostream>
#include<vector>
#include<cstdio>
#include<string>
#include<algorithm>
#include<climits>
#include <iomanip>
using namespace std;

int main() {
  int ans=0;
  long long  W = 0;
  long long  H = 0;
  long long  x = 0;
  long long  y = 0;
  cout << fixed;

  cin >> W >> H >> x >> y;

  if(x == W-x && y == H-y ){
    //W, Hの中心
    cout << setprecision(8) << (double)W*H/2.0 << " " << 1 << endl;
    
  }else if(x == W-x || y == H-y){
    //W or Hの二分線上
    cout << setprecision(8) << (double)W*H/2.0 << " " << 0 << endl;
  }else if( y == x){
    //y=x 線上
    cout << setprecision(8) << (double)W*H/2.0 << " " << 0 << endl;    
  }else if( y == -x){
    //y=-x 線上
    cout << setprecision(8) << (double)W*H/2.0 << " " << 0 << endl;    
  }else{
    //
    cout << setprecision(8) << (double)W*H/2.0 << " " << 0 << endl;
  }

}
