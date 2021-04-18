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
  int a, b, c, x, y;
  int ans = 0;

  cin >> a >> b >> c >> x >> y;

  if(a+b > c*2){
    if(a <= 2*c || b <= 2*c){
      ans += min(x, y)*2*c;
      if(x > y){
        ans += (x-y)*a;
      }else{
        ans += (y-x)*b;
      }
    }else{
      ans += max(x, y)*2*c;
    }
  }else{
    if(a > 2*c){
      ans += x*2*c;
      ans += (y-x)*b;
    }else if(b > 2*c){
      ans += y*2*c;
      ans += (x-y)*a;
    }else{
      ans = a*x + b*y;
    }
  }
  cout << ans << endl;

}
