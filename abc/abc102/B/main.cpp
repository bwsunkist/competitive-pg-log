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
  int minsF = 0;
  int ans = 0;

  cin >> N;

  vector<long long> A(N);
  for(int i = 0; i < N; i++){
    cin >> A[i];
    if(A[i] < 0){
      minsF++;
    }
  }

  sort(A.begin(), A.end());

  if(minsF == 0){
    //全て正数の場合
    cout << A[N-1]-A[0] << endl;
  }else{
    //負の数が含まれる場合
    cout << A[N-1] - A[0] << endl;
  }

}
