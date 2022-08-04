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
  string s;
  int price = 700;

  cin >> s;

  for(int i = 0; i < 3; i++) {
    if(s[i] == 'o') price += 100;
  }
  cout << price << endl;
}
