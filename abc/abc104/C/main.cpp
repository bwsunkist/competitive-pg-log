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
  int D, G;
  int ans = 0;

  cin >> D >> G;

  vector<int> p(D);
  vector<int> c(D);
  for(int i = 0; i < D; i++){
    cin >> p[i] >> c[i];
  }

  int ansptmp = 0;
  int anstmp = 0;
  int targetcnt = 0;
  int innercnt = 0;
  //大きいものから順に足していった場合
  while(ansptmp < G){
     ansptmp += (D - targetcnt) * 100;
     innercnt++;
     if(innercnt == p[D - targetcnt -1]){
       ansptmp += c[D - targetcnt -1];
       targetcnt++;
       innercnt = 0;
     }
     anstmp++;
  }
  cout << anstmp << endl;


}
