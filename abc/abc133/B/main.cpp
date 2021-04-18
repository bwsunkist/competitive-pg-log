#include<iostream>
#include<vector>
#include<cstdio>
#include<cmath>
#include<math.h>
#include<string>
#include<algorithm>
#include<string.h>
#include <iomanip>
#include <sstream>
using namespace std;

int main() {
  int N, D;
  int ans = 0;
  string s;
  int sum=0;
  int clc=0;
  int dbl=0;
  double sq;
  

  cin >> N >> D;

  vector<vector<int>> X(N+1, vector<int>(D+1));
  for(int i = 1; i <= N; i++){
    for(int j = 1; j <= D; j++){
      cin >> X[i][j];
    }
  }

  for(int i = 1; i <= N; i++){
    for(int j = 1; j < i; j++){
      //各組み合わせについて距離計算
      //D次元分
      for(int k = 1; k <= D; k++){
        clc = X[i][k] - X[j][k];
        dbl = clc*clc;
        sum += abs(dbl);
      }
      sq = sqrt(sum);
      if(ceil(sq)==floor(sq)){
        ans++;
      }
      sum=0;
      
    }
  }

  cout << ans << endl;

}
