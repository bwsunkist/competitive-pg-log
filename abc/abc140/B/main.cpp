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

  cin >> N;

  vector<int> A(N);
  vector<int> B(N);
  vector<int> C(N);
  vector<pair<int,int>> AB(N);
  for(int i = 0; i < N; i++){
    cin >> A[i];
  }
  for(int i = 0; i < N; i++){
    cin >> B[i];
  }
  for(int i = 0; i < (N-1); i++){
    cin >> C[i];
  }

  int bf = -2;
  for(int i = 0; i < N; i++){
    ans += B[A[i]-1];
      // cout << " A[" << i << "] = " << A[i] << ", (B)ans += " << B[A[i]-1] << endl;
    if(bf == (A[i]-1)){
      ans += C[A[i] -2];
      // cout << " A[" << i << "] = " << A[i] << ", (C)ans += " << C[A[i]-2] << endl;
    }
    bf = A[i];
  }

  cout << ans << endl;
}
