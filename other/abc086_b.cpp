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

int dignum(int n) {
  int res = 0;
  while(n > 0) {
    res ++;
    n /= 10;
  }
  return res;
}

int main() {
  int a, b;

  cin >> a >> b;

  int a_num, b_num, ab;
  b_num = dignum(b);

  ab = a * pow(double(10), double(b_num)) + b;

  int result;
  result = sqrt(ab);
  if (result * result == ab) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}
