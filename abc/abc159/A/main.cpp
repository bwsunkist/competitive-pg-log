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
  long long a;
  int ans = 0;
  string s;

  cin >> N >> M;

  ans += N * (N-1)/2;
  ans += M*(M-1)/2;

  cout << ans << endl;
}
