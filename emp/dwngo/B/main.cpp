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
  long long  N;

  cin >> N;

  vector<long long> x(N);
  for(int i = 0; i < N; i++){
    cin >> x[i];
  }
  //距離計算
  vector<long long> lenx(N-1);
  for(int i = 1; i < N; i++){
    lenx[i-1] = x[i] - x[i-1];
  }
  //Nまでの階乗kai 計算
  vector<long long> kai(N);
  for(int i = 1; i <= N; i++){
    if(i==1){
      kai[i-1] = 1;
    }else{
      kai[i-1] = kai[i-2]*i;   
    }
  }

  vector<long long> ans(N-1);
  long long bfans = 0;
  for(int i = 0; i < (N-2); i++){
    if(i == 0){
      ans[i]++;
      bfans = ans[i];
    }else{
      for(int j = 0; j < i; j++){
        ans[i]*=(i+1);
        ans[i+1]+=bfans;
        bfans = ans[0];
      }
    }
  }
    cout << "------" << endl;
  for(int i = 0; i < N; i++){
    cout << ans[i] << endl;
  }
    cout << "------" << endl;

long long a = 0;
  for(int i = 0; i < N; i++){
    a+=ans[i]*lenx[i];
  }

if(N == 2){
  cout << lenx[0] << endl;
}else{
  cout << a << endl;
}

}
