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
  int a,b,c,x,y;
  int ans = 500000005;

  cin >> a >> b >> c >> x >> y;

  int ab_fromc = c*2;

  int p1 = a*x + b*y;
  ans = min(ans, p1);

  int p3 = c*2 * max(x, y);
  ans = min(ans, p3);

  if(x > y){
    int p2 = a*(x-y) + c*2 * y;
    ans = min(ans, p2);

  }else{
    int p2 = c*2 * x + b*(y-x);
    ans = min(ans, p2);

  }

  cout << ans << endl;
}
