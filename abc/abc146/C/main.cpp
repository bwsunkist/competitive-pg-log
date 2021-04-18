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
  long long  A, B, X;
  long long  ans = 0;

  cin >> A >> B >> X;

  //Xの桁数を求める
  long long keta = 0;
  long long Xb = X;
  while(Xb > 0){
    Xb = Xb/10;
    keta++;
  }
  keta--;
  // cout << "dX = " << keta << endl;

  //Nスタート地点計算
  long long Nketa = keta-1;
  long long N = X/A;
  // while(Nketa > 0){
  //   N = N*10;
  //   Nketa--;
  // }
  long long Nstart = N;
  long long dN = 0;
  long long NstartC = Nstart;
  while(NstartC > 0){
    NstartC = NstartC/10;
    dN++;
  }
  if(A == 10){
    dN--;
  }
  // cout << "Nstart = " << Nstart << endl;
  // cout << "dN = " << dN << endl;
  Nketa = dN;
  // long long N = 1;
  long long memo=1;
  Nketa--;
  while(Nketa > 0){
    memo = memo*10;
    Nketa--;
  }
  // long long Nstart = X/N;
  // long long dN = 0;
  // long long NstartC = Nstart;
  // while(NstartC > 0){
  //   NstartC = NstartC/10;
  //   dN++;
  // }
  // cout << "Nstart = " << Nstart << endl;
  // cout << "dN = " << dN << endl;

  //計算
  long long calc = A * Nstart + B * dN;
  // cout << "first calc = " << calc << endl;
  long long dNch = Nstart - memo;
  long long lp = 0;
  long long flg = 0;
  // cout << "dNch = " << dNch << endl;
  while(calc > X){
    Nstart = Nstart -1;
    dNch--;
    if(dNch<0 && flg == 0){
      dN--;
      flg++;
    }
    NstartC = Nstart;
    // dN = 0;
    // while(NstartC >999){
    //   NstartC = NstartC/100;
    //   dN = dN+2;
    // }
    // while(NstartC > 0){
    //   NstartC = NstartC/10;
    //   dN++;
    // }
    // dN--;
    calc = A * Nstart + B * dN;
    // cout <<  Nstart << " ";
    lp++;
  }
  // cout << endl;
  // cout << "last calc = " << calc << endl;
  if(Nstart > 1000000000 && lp > 0){
    Nstart =  1000000000;
  }else if(Nstart > 1000000000 && lp == 0){
    Nstart =  0;
  }
  cout << Nstart << endl;
} 
