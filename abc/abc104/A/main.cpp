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

  if(N < 1200){
    s = "ABC";
  }else if(N < 2800){
    s = "ARC";
  }else{
    s = "AGC";
  }

  cout << s << endl;

}
