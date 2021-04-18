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
  int ll;
  double l = 0.0;
  double ans = 0.0;
  string s;

  cin >> ll;

  cout << fixed;
  cout << setprecision(12);

  l = (double)ll;
  if(ll%3 == 0){
    double l3 = 0.0;
    l3 = l/3.0;
    cout << l3*l3*l3 << endl;
    return 0;
  }else{
    double l3 = 0.0;
    l3 = l/3.0;
    cout << l3*l3*((double)ll-l3*2.0) << endl;
    return 0;
  }
}
