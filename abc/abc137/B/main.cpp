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
  long long  K, X;
  int ansCnt = 0;

  cin >> K >> X;
  if(K == 1){
//    cout << "case1: " << endl;
    cout << X;

  }else if((1000000 - X) < K){
//    cout << "case2: " << endl;

    long long ans = X-(K-1);
    while(ans <= 1000000){
      cout << ans;
      if(ans != 1000000){
        cout << " ";
      }
      ans++;
    }

  }else if((X + 1000000) < K){
//    cout << "case3: " << endl;

    long long ans = -1000000;
    while(ans <= (X + (K-1))){
      cout << ans;
      if(ans != (X + (K-1))){
        cout << " ";
      }
      ans++;
    }

  }else{
//    cout << "case4: " << endl;

    int x = 2*K -1;
    vector<long long> ans(x);
    for(int i=0; i<x; i++){
      ans[i] = X-(K-1) + i;
      cout << ans[i];
      if(i != x){
        cout << " ";
      }
    }
  }
  cout << endl;
}
