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
  int h, a;
  int ans = 0;

  cin >> h >> a;

  if(h%a == 0){
    cout << h/a << endl;
  }else{
    cout << h/a +1 << endl;
  }


}
