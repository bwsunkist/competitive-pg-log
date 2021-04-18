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
  int N, K, M;
  int ans = 0;
  string s;
  int tt = 0;
  int ttl = 0;

  cin >> N >> K >> M;

  vector<int> a(N-1);
  for(int i = 0; i < (N-1); i++){
    cin >> a[i];
    tt += a[i];
  }
  ttl = M*N;
  ans = ttl-tt;
  if(ans < 0){
    ans = 0;
  }

  if(ans > K){
    cout << -1 << endl;
  }else{
    cout << ans << endl;
  }

}
