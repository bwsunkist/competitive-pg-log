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
  int N, K;
  int ans = 0;
  string s;

  cin >> N >> K;

  if(N%K == 0){
    ans = 0;
  }else{
    ans ++ ;
  }
  cout << ans << endl;

}
