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
  string s;

  cin >> a >> b;

  cout << max(max((a+b), (a-b)), a*b) << endl;

}
