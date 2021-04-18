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

  cin >> N;

  ans = N/2;
  if(N%2 ==1) ans++;
  cout << ans << endl;
}
