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
  long long A, B;
  long long ans = 0;
 
  cin >> A;
 
  long long maxKY = A; 
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
  sort(yaku.begin(), yaku.end());
  for(long long i = 0; i<yaku.size(); i++){
    if(i != 0){
      cout << ","   ;
    }
      cout <<  yaku[i];
  }
  cout   << endl;
}
