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
  
  double  ab = 0;
  long double   sqa = sqrt((double)a);
  long double   sqb = sqrt((double)b);
  long double   sqc = sqrt((double)c);
  ab = sqrt((double)a) + sqrt((double)b);
  
  //   cout << fixed;
  // cout <<setprecision(30)<< "sa = " << sqrt((double)a)  << endl;
  // cout << "sb = " << sqrt((double)b)  << endl;
  // cout << "sab = " << ab << endl;
  // cout << "sc = " << sqc << endl;
  
  // if(ab < sqc){
  //   cout <<  "Yes" << endl;
  // }else{
  //   cout <<  "No" << endl;
  // }
  if( abs(abs(c) - abs(a)) == abs(abs(c) - abs(b)) ){
    if((sqa + sqb) < sqc){
      cout <<  "Yes" << endl;
    }else{
      cout <<  "No" << endl;
    }    
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
}