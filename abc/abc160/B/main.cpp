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
  long long  N;
  cin >> N ;
  long long  n1 = N/500;
  // cout << n1 << endl;
  long long tmp = N - n1*500;
  long long  n2 = tmp/5;
  // cout << n2 << endl;
  tmp += (tmp-n2);

  long long  ans = n1*1000 + n2*5;
  cout << ans << endl;
}
