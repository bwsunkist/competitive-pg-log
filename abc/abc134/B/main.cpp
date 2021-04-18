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
  int ans = 0;
  int cnt = 0;

  cin >> N >> D;

  while(ans < N){
    ans += 2* D + 1;
    cnt++;
  }
  cout << cnt << endl;

}
