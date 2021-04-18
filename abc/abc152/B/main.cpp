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
  vector<string> n(2);
  int a, b;

  cin >> a >> b;
  string as = to_string(a);
  string bs = to_string(b);

  for(int i = 0; i < a; i++){
    n[1] += bs;
  }
  for(int i = 0; i < b; i++){
    n[0] += as;
  }

  sort(n.begin(), n.end());

  cout << n[0] << endl;

}
