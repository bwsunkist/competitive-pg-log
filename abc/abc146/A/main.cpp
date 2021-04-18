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
  int N, M;
  int ans = 0;
  string s;

  cin >> s;
//SUN,MON,TUE,WED,THU,FRI,SAT
  if(s == "SAT"){
    ans = 1;
  }else if(s == "FRI"){
    ans = 2;
  }else if(s == "THU"){
    ans = 3;
  }else if(s == "WED"){
    ans = 4;
  }else if(s == "TUE"){
    ans = 5;
  }else if(s == "MON"){
    ans = 6;
  }else if(s == "SUN"){
    ans = 7;
  }
  cout << ans << endl;
  
}
