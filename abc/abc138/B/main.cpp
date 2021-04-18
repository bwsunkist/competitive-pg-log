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
  double ans = 0.0;
  double sum = 0.0;

  cin >> N;

  vector<int> A(N);
  for(int i = 0; i < N; i++){
    cin >> A[i];
  }

  for(int i = 0; i < N; i++){
    sum = sum + (double)(1.0/(double)A[i]);
  }

  ans = 1.0/sum;

  //小数点以下指定
  cout << fixed;
  cout << setprecision(5) << ans << endl;
}
