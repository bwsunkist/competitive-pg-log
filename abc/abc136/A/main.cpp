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
  int A, B, C;
  int ans =0;

  cin >> A >> B >> C;

  if((A - B) <= C ){
    ans = C - (A - B);
  } else{
    ans = 0;
  }

  cout << ans << endl;

}
