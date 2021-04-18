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
  if(a == 0){
    return b;
  }else if(b == 0){
    return a;
  }
  return gcd(b, a%b);
}

int main() {
  long long N;
  long long ans = 0;
  long long maxv = 1;

  cin >> N;

  vector<long long > A(N, 0);
  vector<long long > L(N+1, 0);
  L[0] = 0;
  vector<long long > R(N+1, 0);
  R[N] = 0;
  for(int i = 0; i < N; i++){
    cin >> A[i];
  }
  
  for(int i = 0; i < N; i++){
    L[i+1] = gcd(L[i], A[i]);
    // cout << "  L[" << i << "] = "<< L[i]  << endl;
  }

  for(int i = (N-1); i > 0; i--){
    R[i-1] = gcd(R[i], A[i]);
    // cout << "  R[" << i << "] = "<< R[i]  << endl;
  }
  // cout << "-----------------"  << endl;

  for(int i = 0; i < N; i++){    
    if(i == 0){
      maxv = R[i];
    }else if(i == (N-1)){
      maxv = L[N-1];
    }else{
      maxv = gcd(L[i], R[i]);
    }
    
    // cout  << "  i = " << i << ": maxv =  "<< maxv  << endl;
    if(maxv > ans){
      ans = maxv;
    } 
  }
  cout << ans << endl;
}
