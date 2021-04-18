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
  int X, Y;
  int ans = 0;
  string s;

  cin >> N >> M >> X >> Y;

  vector<int> x(N);
  vector<int> y(M);
  for(int i = 0; i < N; i++){
    cin >> x[i];
  }
  for(int i = 0; i < M; i++){
    cin >> y[i];
  }

  sort(x.begin(), x.end());
  sort(y.begin(), y.end());

  int xmax = x[N-1];
  int ymin = y[0];
  // cout << "xmax = " << xmax << endl;
  // cout << "ymin = " << ymin << endl;

  if( xmax < ymin ){
    for(int i = 1; i <= abs(ymin - xmax); i++){
      if(X < (xmax+i) && (xmax+i) < Y){
        ans++;
      }
      // cout << xmax +1 << endl;
    }
  }
  if(ans > 0){
    cout << "No War" << endl;
  }else{
    cout << "War" << endl;
  }

}
