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

  cin >> N;

  vector<int> x(N);
  vector<int> y(N);
  vector<vector<bool>> m(5001, vector<bool>(5001, false));
  for(int i = 0; i < N; i++){
    cin >> x[i] >> y[i];
    m[x[i]][y[i]] = true;
  }

  int maxs = 0;
  double maxs2 = 0;
  for(int i = 0; i < N; i++){
    for(int j = i+1; j < N; j++){
      //i番目とj番目点の距離を求める
      int dx = x[j] - x[i];
      int dy = y[j] - y[i];
      // cout << "★i,j => " << i << ", " << j << endl;
      // cout << "    x, y (i, j) => " << x[i] << "," << y[i] << " : "<< x[j] << "," << y[j] << endl;
      // cout << "    dx, dy => " << dx << ", " << dy << endl;

      //p1: 正方形の３点目探し
      int p1x3 = x[j] - dy;
      int p1y3 = y[j] + dx;
      if( p1x3 >= 0 && p1y3 >= 0 && p1x3 <= 5000 && p1y3 <= 5000 ){
        if(m[p1x3][p1y3] == true){
          // cout << "p1:3 OK " << endl;
          int x4 = p1x3 - dx;
          int y4 = p1y3 - dy;
          if(x4 >= 0 && y4 >= 0 && x4 <= 5000 && y4 <= 5000 ){
            if(m[x4][y4] == true){
              double l = sqrt(pow((double)dx, 2.0) + pow((double)dy, 2.0));
              maxs = max(maxs, (int)(l*l));
              if(maxs2 < l*l){
                maxs2 = l*l;
              }
              // cout << "p1:4 OK " << endl;
              // cout << "  max1s_ = " << maxs << endl;
              // cout << "  max1s2_ = " << maxs2 << endl;
              // cout << "  max1s__ = " << l*l << endl;
              // cout << "  max1s___ = " << (int)(l*l) << endl;
            }
          }
        }
      }
    }
  }

  for(int i = 0; i < N; i++){
    for(int j = i+1; j < N; j++){
      //i番目とj番目点の距離を求める
      int dx = x[j] - x[i];
      int dy = y[j] - y[i];

      //p2: 正方形の３点目探し
      int p2x3 = x[j] + dy;
      int p2y3 = y[j] - dx;
      if(p2x3 >= 0 && p2y3 >= 0 && p2x3 <= 5000 && p2y3 <= 5000 ){
        if(m[p2x3][p2y3] == true){
          // cout << "p2:3 OK " << endl;
          int x4 = p2x3 - dx;
          int y4 = p2y3 - dy;
          if(x4 >= 0 && y4 >= 0 && x4 <= 5000 && y4 <= 5000 ){
            if(m[x4][y4] == true){
              double l = sqrt(pow((double)dx, 2.0) + pow((double)dy, 2.0));
              maxs = max(maxs, (int)(l*l));
              if(maxs2 < l*l){
                maxs2 = l*l;
              }
              // cout << "p2:4 OK " << endl;
              // cout << "  maxs_ = " << maxs << endl;
              // cout << "  maxs2_ = " << maxs2 << endl;
              // cout << "  maxs__ = " << l*l << endl;
              // cout << "  maxs___ = " << (int)(l*l) << endl;
            }
          }
        }
      }
    }
  }
    //小数点以下指定
  cout << fixed;
  // cout << setprecision(5) << ans << endl;

  cout << setprecision(0) << maxs2 << endl;
}
