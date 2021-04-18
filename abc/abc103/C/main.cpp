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
  int N;
  long long ans = 0;

  cin >> N;

  vector<long long> a(N);
  for(int i = 0; i < N; i++){
    cin >> a[i];
  }
  long long tmp = lcm(a[0], a[1]);
  for(int i = 2; i < N; i++){ 
    tmp = lcm(tmp, a[i]);
  }

  for(int i = 0; i < N; i++){
//    ans += (tmp-1) % a[i];
      ans += (a[i] -1);
  }

  cout << ans << endl;
}
