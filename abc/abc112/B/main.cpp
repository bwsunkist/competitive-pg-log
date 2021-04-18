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
  int N, T;
  int ans = 0;
  int mint = 10001;
  int minc = 10001;

  cin >> N >> T;

  vector<int> c(N);
  vector<int> t(N);
  for(int i = 0; i < N; i++){
    cin >> c[i] >> t[i];
    if(t[i] <= T && minc > c[i]){
      mint = t[i];
      minc = c[i];
    }
  }
  if(minc == 10001){
  cout << "TLE" << endl;
  }else{
  cout << minc << endl;
  }
}
