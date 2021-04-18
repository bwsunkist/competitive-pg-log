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
  int N, D;
  long long ans = 1;
  string s;

  cin >> D >> N;

  while(D > 0){
    ans = ans*100;
    D--;
  }
  if( N == 100){
    cout << ans*N+ans << endl;
  }else{
    cout << ans*N << endl;
  }
}
