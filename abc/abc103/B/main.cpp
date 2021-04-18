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
  string S;
  string T;

  cin >> S;
  cin >> T;
    // cout << "S = " << S << endl;
    // cout << "T = " << T << endl;

  if(S == T){
    cout << "Yes" << endl;
    return 0;
  }
  string s = S;
  string tmps = S;
    // cout << "s = " << s << endl;
    // cout << "tmps = " << tmps << endl;

  int loopcnt = S.size()-1;

  while(loopcnt > 0){
    // cout << "loop:"  << loopcnt << endl;

    //最後の文字を最初に持ってくる
    s[0] = tmps[tmps.size()-1];
    for(int i = 0; i < (tmps.size()-1); i++){
      s[i+1] = tmps[i];
    }

    if(s == T){
      cout << "Yes" << endl;
      return 0;
    }
    loopcnt--;
    tmps = s; 
  }

  cout << "No" << endl;
}
