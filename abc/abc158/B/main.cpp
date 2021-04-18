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
  long long  N, A, B;
  long long  ans = 0;
  string s;

  cin >> N >> A >> B;

  long long abn = N/(A + B);

//  cout << abn << endl;
  ans += A * abn;
  long long tmp = N - abn * (A+B);
  if(tmp < A){
    ans += tmp;
  }else{
    ans += A;
  }
  cout << ans << endl;
}
