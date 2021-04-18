#include<iostream>
#include<vector>
#include<cstdio>
#include<string>
#include<algorithm>
#include<string.h>
#include <iomanip>
#include <sstream>
using namespace std;

int main() {
  double T, X;
  int ans = 0;
  string s;

  cin >> T >> X;

  //小数点以下指定
  cout << fixed;
  cout << setprecision(5) << T/X << endl;


}
