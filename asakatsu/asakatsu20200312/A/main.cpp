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

  cin >> N >> M;

  vector<int> l(M);
  vector<int> r(M);
  for(int i = 0; i < M; i++){
    cin >> l[i] >> r[i];
  }

  int sl, sr;
  int len = 0;
  for(int i = 0; i < M; i++){
    if(i == 0){
      sl = l[i]; 
      sr = r[i];
      len = sr - sl;
    }else{
      if(r[i] < sl || l[i] > sr){
        cout << 0 << endl;
        return 0;
      }else if(sl >= l[i] && l[i] <= sl <= r[i] && r[i] <= sr){
        sl = sl;
        sr = r[i];
        len = sr - sl;
      }else if(sl <= l[i] &&  sl <= l[i] <= sr && r[i] >= sr){
        sl = l[i];
        sr = sr;
        len = sr - sl;
      }
    }
    if(len < 0){
      cout << 0 << endl;
      return 0;
    }
    // cout << "sl = " << sl << ", sr = " << sr << endl;
  }
  cout << len+1 << endl;
}
