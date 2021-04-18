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

  cin >> N;

  int zeroc = 0;
  int minnn = __INT_MAX__;
  vector<int> h(N);
  for(int i = 0; i < N; i++){
    cin >> h[i];
    if(h[i] == 0){
      zeroc++;
    }
    minnn = min(minnn, h[i]);
  }
  if(zeroc == 0){
    //zero が無い場合, 全体的に下げる
    for(int i = 0; i < N; i++){
      h[i] -= minnn;
    }
    ans += minnn;
  }
  // cout << "----1 " << endl;
  // for(int i = 0; i < N; i++){
  //   cout << "h[" << i << "] = " << h[i] << endl;
  // }
  // cout << "----1 " << endl;

  int zrflg = 0;
  int acnt = 0;
  int minn = __INT_MAX__;
  int allsum = 1;
  while(allsum != (N+1)){
    allsum = 1;
    for(int i = 0; i < N; i++){
      if(h[i] == 0) allsum++;

      if(h[i] > 0 && zrflg == 0){
        zrflg++;
        acnt = i;
        minn = min(minn, h[i]);
        // cout << "if1: minn = " << minn << ", i = " << i << ", h[] =" << h[i] << endl;

        // if(i == (N-1) && allsum == N){
        if(i == (N-1)){
          // cout << "if1: minn = fin"  << endl;
          // cout << "ans = " << ans << " + " << minn  << endl;
          ans+=minn;
          h[i] -= minn;
          zrflg= 0;
          // allsum = (N+1);
        }
      }else if(h[i] > 0 && zrflg > 0 && i != (N-1)){
        minn = min(minn, h[i]);
        // cout << "if2: minn = " << minn << ", i = " << i << endl;
      }else if((h[i] == 0 || i == (N-1)) && zrflg > 0){
        // cout << "if3: "<< ", i = " << i << endl;
        if(h[i] != 0) {
            minn = min(minn, h[i]);
            i++;
          }
        // cout << "i = " << acnt << " ~~ " << i  << endl;
        for(int j = acnt; j < i; j++){
          h[j] -= minn;
        }
        // cout << "ans = " << ans << " + " << minn  << endl;
        ans += minn;
        minn = __INT_MAX__;
        zrflg = 0;
      }
    }

      // cout << "----;lp " << endl;
      // for(int i = 0; i < N; i++){
      //   cout << "h[" << i << "] = " << h[i] << endl;
      // }
      // cout << "----;lp " << endl;
  }

  // for(int i = 0; i < N; i++){
  //   cout << "h[" << i << "] = " << h[i] << endl;
  // }
  // cout << "----2 " << endl;

  cout << ans << endl;
}
