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
  long long  A, B;
  int ans = 0;

  cin >> A >> B;
  if((A+B)%2 == 0){
    cout << (A+B)/2 << endl;
  }else{
    cout << "IMPOSSIBLE" << endl;
  }
}
