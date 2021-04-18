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
  int zcnt =0;
  int ocnt =0;

   cin >> S;

   for(int i = 0; i < S.size(); i++){
      if(S[i] == '0'){
         zcnt++;
      }else if(S[i] == '1'){
         ocnt++;
      }
   }
  cout << min(zcnt, ocnt)*2 << endl;
}
