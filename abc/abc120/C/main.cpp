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
  string S;

  cin >> S;

  int flg = 1;
  int lpflg = 0;
  int cnt = 0;
  while(flg > 0 && S.size() > 1){
        // cout << "-----------loop----" << endl;
    for(int i = 1; i < S.size(); i++){
     if(S[i-1] == '0' && S[i] == '1'){
        S.erase(i-1, 2);
        lpflg ++;
        cnt++;
        // cout << S << ", cnt1++" << endl;
     }else if(S[i-1] == '1' && S[i] == '0'){
        S.erase(i-1, 2);
        lpflg ++;
        cnt++;
        // cout << S << ", cnt2++" << endl;
     }else if(i == (S.size()-1) && lpflg == 0){
        flg = 0;       
     }
    }
    if(S.size() == 0){
      break;
    }
    lpflg = 0;
  }
  cout << cnt*2 << endl;
}
