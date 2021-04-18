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
 
//最大公約数を求める
long long gcd(long long a, long long b){
  if(b == 0){
    return a;
  }
  return gcd(b, a%b);
}
 
//最小公倍数を求める
long long lcm(long long a, long long b){
  return a*b/gcd(b, a%b);
}
 
int main() {
  long long A, B;
  long long ans = 0;
 
  cin >> A >> B;
 
  long long maxKY = gcd(A,B); 
  //cout << maxKY << endl;
 
  vector<long long> yaku;
  for(long long i=1; i*i <= maxKY; ++i ){
    if(maxKY %i ==0){
      yaku.push_back(i);
      if(i!=1 && i*i!=maxKY){
        yaku.push_back(maxKY/i);
      }
    }    
  }
  yaku.push_back(maxKY);
  if(maxKY == 1){
    cout << 1 << endl;
    return 0;
  }
  vector<long long> la(yaku.size(), 0);
  // for(long long k = 0; k < la.size(); k ++){
  //   cout << la[k] << endl;
  // }
  for(long long i = 0; i<yaku.size(); i++){
    for(long long j = (i+1); j < yaku.size(); j++ ){
      if(gcd(yaku[i], yaku[j]) == 1){
        cout << "ans++ > " << yaku[i] << ", " << yaku[j] << endl;
//        ans++;
      }else{
        if(j > i && la[i] == 0){
          la[j]--;
          //cout << "la-- > " << yaku[i] << ", " << yaku[j] << endl;
        }
      }
    }
  }
  for(long long k = 0; k < la.size(); k ++){
    //cout << la[k] << endl;
    if(la[k] == 0){
      ans++;
    }
  }
  cout << ans << endl;
}
 