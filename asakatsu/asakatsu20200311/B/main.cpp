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
  int N = 5;
  int cN = 1;
  int ans = 0;

  // cin >> N;

  // for(int i = 0; i < N; i++){
  //   cN = cN*(N-1);
  // }
  cN = N*N;
  // cout << "cN = " << cN << endl;
  vector<int> a(N);
  vector<int> b(cN);
  for(int i = 0; i < N; i++){
    cin >> a[i];
  }
   sort(a.begin(), a.end());

  for(int i = 0; i < (N-2); i++){
    for(int j = (i+1); j < (N-1); j++ ){
      for(int k = (i+2); k < N; k++){
        b.push_back(a[i]+a[j]+a[k]);
      }
    }
  }
  sort(b.begin(), b.end(), greater<int>());

  int b_len = b.size();
  // cout << " b ---  " << endl;
  // for(int i = 0; i < b_len; i++){
  //   cout << b[i] << ", ";
  // }
  // cout << endl;
  // cout << " b ---  " << endl;

  int tmp = 0;
  int tmpcnt = 0;
  for(int i = 0; i < b_len; i++){
    if(tmp != b[i]){
      tmp = b[i];
      tmpcnt++;
      if(tmpcnt == 3){
        ans = tmp;
        break;
      }
    }
  }

  cout << ans << endl;

}
