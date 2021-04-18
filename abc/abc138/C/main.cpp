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
  double ans = 0;

  cin >> N;

  vector<int> v(N);
  for(int i = 0; i < N; i++){
    cin >> v[i];
  }
   sort(v.begin(), v.end());

  ans = ((double)v[0] + (double) v[1])/2.0;
  for(int i = 2; i < N; i++){
    ans = (ans + (double)v[i])/2.0;
  }

  cout << ans << endl;

}
