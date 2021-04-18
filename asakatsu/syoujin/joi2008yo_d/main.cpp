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
  int n, m;

  //インプット１.
  cin >> m;
  vector<int > x(m);
  vector<int > y(m);
  vector<pair<int, int>> xy(m);
  for(int i = 0; i < m; i++){
    cin >> x[i] >> y[i];
    xy[i] = make_pair(x[i], y[i]);
  }

  //インプット２. 
  cin >> n;
  int  maxxy = 1000001;
  vector<int > x_(n);
  vector<int > y_(n);
  vector<pair<int, int>> xy_(n);
  for(int i = 0; i < n; i++){
    cin >> x_[i] >> y_[i];
    xy_[i] = make_pair(x_[i], y_[i]);
  }

  // //yの小さい方から星座の形確認
  sort(xy.begin(), xy.end());

  vector<int > dx(m);
  vector<int > dy(m);
  dx[0]=0;dy[0]= 0;
  for(int i = 1; i < m; i++){
    dx[i] = xy[i].first - xy[i-1].first;
    dy[i] = xy[i].second - xy[i-1].second;
  }
  // cout << "sample: "  << endl;
  // for(int i = 0; i < m; i++){
  //   cout << "x, y = " << xy[i].first << ", " << xy[i].second << ": dx, dy = " << dx[i] << ", " << dy[i] << endl;
  // }

  int ansx = 0;
  int ansy = 0;
  //yの小さい方から星座の形確認
  sort(xy_.begin(), xy_.end());
  // cout << "target: "  << endl;
  // for(int i = 0; i < n; i++){
  //   cout << "x, y = " << xy_[i].first << ", " << xy_[i].second << endl;
  // }
  // cout << " ----- "  << endl;

  //各点(i番目スタート)を起点にdx,dy(想定移動先)の存在確認
  //星座が10個から成る時, 残り9個以降は見ても無駄なのでn-mまで
  for(int i = 0; i < (n-m); i++){
    bool allok = false;
    int allok2 = 0;
    // cout << "**start: " << i << endl;
    //dx, dy の数ループを回し、次の座標を計算
    for(int j = i+1; j < i+m; j++){
      int tmpx;
      int tmpy;

      // if(allok){
      if(allok2 > 0){
        //前回OKだったら座標引き継ぎ
        tmpx = tmpx + dx[j-i];
        tmpy = tmpy + dy[j-i];
      }else{
        //そうでなければリセット
        tmpx= xy_[j-1].first + dx[j-i];
        tmpy= xy_[j-1].second + dy[j-i];
      }
      for(int k = j; k < n; k++){
        //計算した座標と同じものが存在するか確認
        int ttmpx = xy_[k].first;
        int ttmpy = xy_[k].second;
        // cout << "j = " << j <<": tmpx = " << tmpx << ", tmpy = " << tmpy << ", ttmpx = " << ttmpx << ", ttmpy = " << ttmpy;

        if(ttmpx == tmpx && ttmpy == tmpy){
          // cout << " ok:" << endl;
          // allok = true;
          allok2++;
          break;
        }else{
          // cout << " ng:" << endl;
          // allok = false;
          // allok2 = 0;
        }
        //x, y 両方超えたらもう正解は出てこないので終了.
        if(ttmpx > tmpx && ttmpy > tmpy){
          // cout << " ng2:" << endl;
          // allok = false;
          // allok2 = 0;
          break;
        }
      }
    }
    //全てのチェックでOKの場合
    if(allok2 == (m-1)){
      // cout << " allok" << endl;
      //i番目起点が答えとなる.
      ansx = xy_[i].first - xy[0].first;
      ansy = xy_[i].second - xy[0].second;
      // cout << "  xy_: " << xy_[i].first << ", " << xy_[i].second << endl;
      // cout << "  xy : " << xy[0].first << ", " << xy[0].second << endl;
    }
  }

  cout << ansx << " " << ansy << endl;
}
