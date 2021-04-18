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
  int A, B;
  int tans = 0;
  int ans = -10001;

  cin >> A >> B;

  tans  =  A + B;
  ans =  max(tans, ans);
  tans  = A - B;
  ans = max(tans, ans);
  tans  = A * B;
  ans = max(tans, ans);

  cout << ans << endl;
}
