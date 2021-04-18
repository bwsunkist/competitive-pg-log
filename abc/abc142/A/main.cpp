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
  int n, M;
  double ans = 0.0;
  string s;

  cin >> n;
  double N = (double)n;
  if(n%2 == 0){
    ans = (double)N/2.0/(double)N;
  }else if(n == 1){
    ans = 1;
  }else{
    ans = ((double)N/2.0+0.5)/(double)N;
  }
  cout << ans << endl;
}
