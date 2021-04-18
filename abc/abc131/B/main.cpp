#include<iostream>
#include<vector>
#include<cstdio>
#include<string>
#include<algorithm>
#include<climits>
using namespace std;

int main() {
  int ans=0;
  int N = 0;
  int L = 0;
  int sum =0;

  cin >> N >> L;

  sum = N*L + (N-1)*N/2;
  //  cout << "N*L = " << N*L << endl;
  //  cout << " (N-1)*N/2 = " <<  (N-1)*N/2 << endl;
  //  cout << "sum = " << sum << endl;

  if(L > 0){
    ans = sum - L;
  }else if(L < 0){
    if(N+L >= 1){
      ans = sum;
    }else{
      ans = sum - (L + N -1);
    }
  }else{
    ans = sum;
  }
  
    cout << ans << endl;

}
