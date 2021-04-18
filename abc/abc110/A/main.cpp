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
  int ans = 0;
  vector<int> a(3);

  cin >> a[0] >> a[1] >> a[2];

  sort(a.begin(), a.end());

  cout << a[2]*10 + a[1] + a[0] << endl;
}
