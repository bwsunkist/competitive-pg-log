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
  string s;

  cin >> N;

  //Nの桁数を算出
  int cnt = 1;
  int tmpN = N/10;
  while(tmpN > 0){
    cnt++;
    tmpN = tmpN/10;
  }
  // cout << "cnt = " << cnt << endl;

  if(cnt == 1){
    // cout << "if) cnt == 1" << endl;
    ans = N;
  }else{
    // cout << "else)" << endl;

    int tmpcnt = cnt;
    // cout << "  tmpcnt = " << tmpcnt << endl;

    //上から順に各桁での個数を計算
    while(tmpcnt >= 1){
      // cout << "  while loop )" << endl;
      // cout << "    tmpcnt = " << tmpcnt << endl;
      if(tmpcnt % 2 == 0){
        //偶数桁の場合、答えへの干渉なし

      }else{
        //奇数桁の場合

        if(tmpcnt == cnt){
          //一番上の桁
          ans = N - pow(10.0, cnt - 1) + 1;
          // cout << "      ans = " << ans << endl;
        }else{
          //それ以外
          ans = ans + pow(10.0, tmpcnt - 1) * 9;
          // cout << "      ans = " << ans << endl;
          // cout << "      pow(tmpcnt - 1, 10.0) = " << pow(10.0, tmpcnt - 1) << endl;
        }
      }
      tmpcnt--;
    }
  }
  cout << ans << endl;
}
