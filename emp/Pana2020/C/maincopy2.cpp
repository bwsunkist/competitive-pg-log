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
  long long  a, b, c;
  long long  ans = 0;
  string s;

  cin >> a >> b >> c;

  long double  ab = 0.0;
  double   sqa = sqrt(static_cast<long double>((long double)a));
  double   sqb = sqrt(static_cast<long double>(b));
  double   sqc = sqrt((double)c);
  ab = sqrt(static_cast<long double>((long double)a)) + sqrt(static_cast<long double>((long double)b));

  cout << fixed;
  cout <<setprecision(30) << "sa = " << sqa  << endl;
  cout << "sb = " << sqb  << endl;
  // cout << "sab= " << ab << endl;
  cout << "sc = " << sqc << endl;

  if(sqrt((double)a) >= sqc){
    cout <<  "No" << endl;
    return 0;
  }
  if(sqrt((double)b) >= sqc){
    cout <<  "No" << endl;
    return 0;
  }

  if( abs(abs(c) - abs(a)) > abs(abs(c) - abs(b)) ){
    //bの方がcに近い場合
      if(sqa < (sqc - sqb)){
        cout <<  "Yes" << endl;
      }else{
        cout <<  "No" << endl;
      }    
  }else{
    //aの方がcに近い場合
      if(sqb < (sqc - sqa)){
        cout <<  "Yes" << endl;
      }else{
        cout <<  "No" << endl;
      }    

  }

  // if(ab < sqc){
  //   cout <<  "Yes" << endl;
  // }else{
  //   cout <<  "No" << endl;
  // }

}
