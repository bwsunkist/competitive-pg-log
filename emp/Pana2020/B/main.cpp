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
  long long  h, w;
  long long  ans = 0;

  cin >> h >> w;

  if(h == 1 || w == 1){
    cout << 1 << endl;
    return 0;
  }

  // cout << "h = " << h<< endl;
  // cout << "w = " << w<< endl;
  long long hh = 0;
  long long hw = 0;
  long long wh = 0;
  long long ww = 0;
  if(w%2 == 1){
    ww = (w-1)/2+1;
    hw = (w-1)/2;
    // cout << "w %2 = 1" << endl;
  }else{
    ww = w/2;
    hw = w/2;
  }

  if(h%2 == 1){
    wh = (h-1)/2+1;
    hh = (h-1)/2;
    // cout << "h %2 = 1" << endl;
  }else{
    wh = h/2;
    hh = h/2;
  }
  long long wwnum = ww*wh;
  long long hhnum = hh*hw;
  ans = wwnum + hhnum;

  // cout << "hh = " << hh << endl;
  // cout << "hw = " << hw << endl;
  // cout << "wh = " << wh << endl;
  // cout << "ww = " << ww << endl;
  // cout << "hhnum = " << hhnum << endl;
  // cout << "wwnum = " << wwnum << endl;  
  cout << ans << endl;
}
