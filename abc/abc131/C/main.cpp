#include<iostream>
#include<vector>
#include<cstdio>
#include<string>
#include<algorithm>
#include<climits>
using namespace std;

long long  gcd(long long  a, long long  b){
  if(b == 0){
    return a;
  }

  return gcd(b, a%b);
}

long long  lcm(long long  a, long long b){
  return a*b/gcd(b, a%b);
}



int main() {
  long long  ans=0;
  long long acd, bcd;
  long long a,b,c,d,cxd, cd, cc, dd;
  
  cin >> a >> b >> c >> d;
  
  cxd = lcm(c,d);
  cout << "cxd = " << cxd <<endl;
  //  cxd = c * d;
  bcd = b/cxd;
  acd = (a-1)/cxd;
  //cでもdでも割り切れるもの
  cd = bcd - acd;
  cout << "cd = " << cd << endl;

  bcd = b/c;
  acd = (a-1)/c;
  cout << "---" << endl;
  cout << "bcd = "<< bcd << endl;
  cout << "acd = "<< acd << endl;

  //cでわりきれるもの　
  cc = bcd - acd - cd;
  cout << "cc = " << cc << endl;
  cout << "---" << endl;
  
  bcd = b/d;
  acd = (a-1)/d;
  //dでわりきれるもの　
  dd = bcd - acd - cd;
  cout << "dd = " << dd << endl;

  cout << "b-a = " << b-(a-1) << endl;

  cout << b - (a-1) - (cd + cc + dd) << endl;
}
