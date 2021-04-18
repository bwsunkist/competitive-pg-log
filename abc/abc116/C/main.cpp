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

  int minn = __INT_MAX__;
  vector<int> h(N+1);
  vector<int> hc(N+1);
  for(int i = 0; i < N; i++){
    cin >> h[i];
    minn = min(minn, h[i]);
  }

  hc[0] = h[0];
  h[N] = 0;
  // cout << "hc[0] = " <<  hc[0] << endl;
  int tmp = 0;
  int tmp2 = 0;
  if(h[0] > h[1]){
    //下りスタート
    tmp = 1;    
  }else{
    //上りスタート
    tmp = -1;
  }

  int cnt = 1;
  for(int i = 1; i <= N; i++){
    tmp2 = h[i-1] - h[i];
    if(tmp2 * tmp < 0){
      //傾きが変わったタイミング
      hc[cnt] = h[i-1];
      // cout << "hc[" << cnt << "] = " <<  h[i-1]  << " ---->  include" << endl;
      cnt++;
      if(tmp2 > 0){
        //下りの時
        tmp = 1;
      }else{
        tmp = -1;
      }
    }else{
      // cout << "h[" << i << "] = " <<  h[i] << " --> not include" << endl;
      // if(hc[cnt-1] > h[i] && tmp )
    }
  }

  // cout << " -- before calc -- " << endl;
  h[cnt] = 0;
  cnt++;
  // for(int i = 0; i < cnt; i++){
  //   cout << "hc[" << i << "] = " <<  hc[i] << endl;
  // }

  // cout << "minn = " << minn << endl;
  if(minn != 0){
    ans = minn;
    for(int i = 0; i < cnt; i++){
      hc[i] = (hc[i] - minn);
    }
  }else{
    //途中に0がある場合
    int minnn = __INT_MAX__;
    int ccnt = 0;
    int acnt = 0;
    for(int i = 0; i < cnt; i++){
      // cout << i << ", minnn = " << minnn << endl;; 
      if(hc[i] == 0 ){
        ans += minnn;
        for(int j = acnt; j<ccnt; j++){ 
          hc[j] = hc[j] - minnn;
        }
        minnn = __INT_MAX__;
        acnt = ccnt;
      }
      ccnt++;
      minnn = min(hc[i], minnn);
      if(i != 0){
        if(hc[i-1] == 0){
          minnn = hc[i];          
        }
      }
    }
  }
  // cout << " -- last -- " << endl;
  for(int i = 0; i < cnt; i++){
    if(hc[i] > 0){
      ans += hc[i];
    }
    // cout << "hc[" << i << "] = " <<  hc[i] << endl;
  }

  cout << ans << endl;
}
