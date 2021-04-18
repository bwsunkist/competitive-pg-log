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
  int N, K;
  int ans = 0;
  int ttl = 0 ;
  string s;

  cin >> K >> N;

  vector<int> a(N);
  vector<int> b(N);
  b[0] = 0;
  for(int i = 0; i < N; i++){
    cin >> a[i];
    if(i > 0){
      b[i] = a[i] - a[i-1];
    }
    ans = max(ans, b[i]);
//    ttl += b[i];
  }
  ans = max(ans, (a[0]+(K-a[N-1])));
  // cout << a[0] << endl;
  // cout << (K-a[N-1]) << endl;
  // cout << ans << endl;
  cout << K-ans << endl;


}
