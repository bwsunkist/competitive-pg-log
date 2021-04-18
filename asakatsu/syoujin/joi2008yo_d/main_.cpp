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
  cin >> n;
  vector<int > x(m);
  vector<int > y(m);
  vector<pair<int, int>> xy(m);
  for(int i = 0; i < m; i++){
    cin >> x[i] >> y[i];
    xy[i] = make_pair(x[i], y[i]);
  }

  //インプット２. ついでに存在確認マップ作成
  cin >> n;
  vector<int > x_(n);
  vector<int > y_(n);
  vector<pair<int, int>> xy_(n);
  int maxxy = 1000001;
  vector<vector<bool>> s(1000001, vector<bool>(1000001, false));
  for(int i = 0; i < n; i++){
    cin >> x_[i] >> y_[i];
    xy_[i] = make_pair(x_[i], y_[i]);
    s[x_[i]][y_[i]] = true;
  }

  //yの小さい方から星座の形確認
  sort(xy.begin(), xy.end());
  vector<int > dx(m);
  vector<int > dy(m);
  for(int i = 1; i < m; i++){
    dx[i] = xy[i].first - xy[i-1].first;
    dy[i] = xy[i].second - xy[i-1].second;
  }

  int ansx = 0;
  int ansy = 0;
  //yの小さい方から星座の形確認
  sort(xy_.begin(), xy_.end());
  //各点(i番目スタート)を起点にdx,dy(想定移動先)の存在確認
  for(int i = 0; i < (n-m); i++){
    bool allok = false;
    for(int j = i+1; j < i+m; j++){
      int tmpx= xy_[i-1].first + dx[j-i];
      int tmpy= xy_[i-1].second + dy[j-i];
      if( s[tmpx][tmpy]== false ){
        allok = false;
        break;
      }else{
        allok = true;
      }
    }
    //全てのチェックでOKの場合
    if(allok){
      //i番目起点が答えとなる.
      ansx = xy_[i].first - xy[i].first;
      ansy = xy_[i].second - xy[i].second;
    }
  }

  cout << ansx << ansy << endl;

}
