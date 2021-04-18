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

  int alw = (int)((double)A*100/8 + 0.9);
  int aup = (int)((double)((A+1)*100/8 + 0.9));
  int blw = (int)((double)B*100/10 + 0.9);
  int bup = (int)((double)((B+1)*100/10 + 0.9));
  // cout << "alw = " << alw << ", aup = " << aup << endl;
  // cout << "blw = " << blw << ", bup = " << bup << endl;

  if(alw == blw){
    ans = alw;
  }else if(alw < blw && aup < blw){
    ans = -1;
  }else if (blw < alw && bup < alw){
    ans = -1;
  }else if(alw < blw && aup > blw){
    ans = blw;
  }else if(blw < alw && bup > alw){
    ans = alw;
  }else if(alw < blw && aup > bup){
    ans = blw;
  }else if(blw < alw && bup > aup){
    ans = alw;
  }else{
    ans = -1;
  }
  cout << ans << endl;

}
