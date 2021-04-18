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
  long long N, M;

  cin >> N >> M;

  vector<int> x(N+M);
  vector<int> y(N+M);
  vector<double> r(N+M);
  int a;
  for(int i = 0; i < N; i++){
    cin >> x[i] >> y[i] >> a;
    r[i] = (double)a;
  }
  for(int i = N; i < N+M; i++){
    cin >> x[i] >> y[i];
  }
  double ans = 100000000.0;
  for(int i = N; i < N+M; i++){
    double kyori = 100000000.0;
    for(int j = 0; j < N+M; j++){
      if(i == j){
        continue;
      }
      //各点同士の距離計算
      double tmp = pow((double)(x[i] - x[j]), 2.0) + pow((double)(y[i] - y[j]), 2.0);
      tmp = sqrt(tmp);
      if(j < N){
      //半径ある場合は差し引き
        tmp -= r[j];
      }else{
      //半径ない場合は半分に
        tmp = tmp/2.0;
      }
      //i番目円が取りうる最小の半径
      kyori = min(kyori, tmp);
    }
    r[i] = kyori;
  }

  //最小の半径
  sort(r.begin(), r.end());

  cout << fixed;
  cout << setprecision(7) << r[0] << endl;
}
