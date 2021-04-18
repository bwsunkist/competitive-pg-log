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
  long long ans = 0;
  long long sum = 0;

  cin >> N;

  vector<long long> A(N);
  vector<long long> B(N);
  for(int i = 0; i < N; i++){
    cin >> A[i];
    B[i] = A[i]-(i+1);
  }

  // for(int i = 0; i < N; i++){
  //   cout << B[i] << ", ";
  // }
  // cout << endl;

  sort(B.begin(), B.end());

  long long center;
  if(N % 2 == 1){
    center = B[N/2];
  }else{
    center = (B[N/2] + B[N/2-1])/2;
  }
  // cout << center << endl;

  for(int i = 0; i < N; i++){
    ans += abs(B[i] - center);
  }
  cout << ans << endl;
}
