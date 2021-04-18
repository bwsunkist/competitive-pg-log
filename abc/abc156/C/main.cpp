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

  int xmax = 0;
  vector<int> x(N);
  for(int i = 0; i < N; i++){
    cin >> x[i];
    xmax=max(xmax, x[i]);
  }

  int ans = 1000000;
  int xs = x.size();
  int tmp = 0;
  for(int i = 0; i < (xmax+1); i++){
    for(int j = 0; j < xs; j++){
      tmp += (int)pow((double)(x[j]-i), 2.0);
      // cout << "tmp " << j << " = " << tmp << endl;
    }
    ans = min(ans, tmp);
    // cout << " ans " << i << " = " << ans << endl;
    tmp = 0;
  }

  cout << ans << endl;
}
