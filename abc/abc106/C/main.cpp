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
  int ans;
  long long K;
  string S;

  cin >> S;
  cin >> K;

  // for(int i = 0; i < S.length(); i++){
  //    cout << "S[" << i << "] = " << S[i] - '0' << endl;
  // }

  // vector<long long> a(10);
  // a[0] = 0;
  // a[1] = 1;
  // for(int i = 2; i < 10; i++){
  //    a[i] = log10((double) i) * 5.0 * pow(10.0, 15.0);
  //    cout << "a[" << i << "] = " << a[i] << endl;
  //    cout << log10((double) i) * 5.0 * pow(10.0, 15.0) << endl;
  // }

  // int Scnt = 0;
  // while( K > 0 ){
  //   // cout << "  S[" << Scnt << "] = " << S[Scnt] - '0' << endl;
  //   if(K > (a[S[Scnt] - '0'])){
  //     K -= a[S[Scnt] - '0'];
  //     Scnt++;
  //     // cout << "   if  " << K << endl;
  //   }else{
  //     ans = S[Scnt] - '0';
  //     // cout << "   else  " << K << endl;
  //     cout << ans << endl;
  //     return 0;
  //   }
  // } 

// cout << (long long )S.length() << endl;
  // cout << S[Scnt] << endl;
  for(int i = 0; i < min((long long )S.length(), K ); i++){
    if((S[i] - '0') >= 2){
      cout << S[i] << endl;
      return 0;
    }
  }
  cout << '1' << endl;
}
