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

int digsum(int n) {
  int res = 0;
  int tmp = 0;
  while(n > 0) {
    res += n%10;
    tmp = n;
    n /= 10;
  }
  return tmp;
}

int main() {
  int A, B;
  int ans = 0;

  cin >> A >> B;

  int tmpa = 0;
  int tmpb = 0;

  tmpa = A*100/8;
  tmpb = B*100/10;

 cout << "tmpa = " << tmpa << ", tmpb = " << tmpb << endl;

  if(digsum(tmpa) == digsum(tmpb)){
    int ba = 0;
    int bb = 0; 
    int aa = 0;
    int ab = 0; 
    aa = tmpa*8/100;
    ab = tmpa*10/100;
    ba = tmpb*8/100;
    bb = tmpb*10/100;
    if(aa == A && ab == B){
      ans = tmpa;
       cout << "aa = " << aa << ",  ab = " << ab << endl;
       cout << "tmpa = " << tmpa << " ==  A = " << A << endl;
    }else if(ba == A && bb == B){
      ans = tmpb;      
       cout << "ba = " << ba << ",  bb = " << bb << endl;
       cout << "tmpb = " << tmpb << " ==  B = " << B << endl;
    }

  }else{
    ans = -1;
  }
  cout << ans << endl;

}
