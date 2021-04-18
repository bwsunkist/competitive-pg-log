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

  cin >> N >> M;

  long long ans = 0;
  long long tmp = 0;
  vector<vector<long long>> a(N, vector<long long>(M));
  for(int i = 0; i < N; i++){
    for(int j = 0; j < M; j++){
      cin >> a[i][j];
    }
  }
  for(int i = 0; i < (M-1); i++){
    for(int j = (i+1) ; j < M; j++){
      for(int k = 0; k < N; k++){
        tmp += max(a[k][i], a[k][j]);
      }
      // cout << "song[" << i << ", " << j << "] = " << tmp << endl;
      ans = max(ans, tmp);
      tmp = 0;
    }
  }
  cout << ans << endl;
}
