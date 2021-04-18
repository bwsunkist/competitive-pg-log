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
  long long N;
  long long  maxc = 0;
  long long cnt = 0;

  cin >> N;

  vector<long long> H(N);
  for(int i = 0; i < N; i++){
    cin >> H[i];

    if(i>0){
      //連続降下可能数カウント
      if(H[i-1] >= H[i]){
        cnt++;
        maxc = max(maxc, cnt);
      }else{
        cnt = 0;
      }
    }
  }
  cout << maxc << endl;

}
