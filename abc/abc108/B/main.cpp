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

int main() {
  int x1, x2,x3,x4,y1,y2,y3,y4;
  int ans = 0;
  int x12,y12;
  
  cin >> x1 >> y1 >> x2 >> y2;

  x12 = x2 -x1;
  y12 = y2 -y1;

  if(x12 == 0){
    //かんたんパターン
    if(y12 > 0){
        x3 = x2 - y12;
        y3 = y2 + x12;
        x4 = x3 - x12;
        y4 = y3 - y12;
    }else{
        x3 = x2 - y12;
        y3 = y2 + x12;
        x4 = x3 - x12;
        y4 = y3 - y12;
    }
  }else if(y12 == 0){
    //かんたんパターン2
    if(x12 > 0){
        x3 = x2 - y12;
        y3 = y2 + x12;
        x4 = x3 - x12;
        y4 = y3 - y12;
    }else{
        x3 = x2 - y12;
        y3 = y2 + x12;
        x4 = x3 - x12;
        y4 = y3 - y12;      
    }
  }else{
    if(x12 > 0){
      if(y12 > 0){
        //star1
        x3 = x2 - y12;
        y3 = y2 + x12;
        x4 = x3 - x12;
        y4 = y3 - y12;
      }else{
        //star4
        x3 = x2 - y12;
        y3 = y2 + x12;
        x4 = x3 - x12;
        y4 = y3 - y12;
      }
    }else{
      if(y12 < 0){
        //star3
        x3 = x2 - y12;
        y3 = y2 + x12;
        x4 = x3 - x12;
        y4 = y3 - y12;
      }else{
        //star2
        x3 = x2 - y12;
        y3 = y2 + x12;
        x4 = x3 - x12;
        y4 = y3 - y12;
      }
    }
  }

  cout << x3 << " " << y3 << " " ;
  cout << x4 << " " << y4 << endl;
}
