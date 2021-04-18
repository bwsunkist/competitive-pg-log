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
  int a, b;
  int ans = 0;

  cin >> a >> b;

  if((a < b) || (a <= 2*b)){
    cout << 0 << endl;
    return 0;
  }
  ans = a - 2*b;
  cout << ans << endl;
}
