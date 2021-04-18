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
  int N;
  int ans = 0;
  string s;

  cin >> N;

  for(int i = 1; i <= N; i++){
    ans+=i;
  }
  cout << ans << endl;
}
