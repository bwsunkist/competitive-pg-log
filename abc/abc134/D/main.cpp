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
  long long  N, M;
  long long  ans = 0;

  cin >> N;

  vector<long long > a(N);
  vector<long long > b(N,0);
  for(long long  i = 1; i < N; i++){
    cin >> a[i];
    for(long long j = 1; j < i; j++){
      if(i%j == 0){
        b[j]+=a[i];
      }
    }
  }

  for(long long  i = 1; i < N; i++){
    if(b[i]%2 != a[i]){
      ans++;
    }
  }
  if()

}
