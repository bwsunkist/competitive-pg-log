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
  long long N, T;
  long long ttl = 0;
  long long ans = 0;
  string s;

  cin >> N >> T;

  vector<long long> t(N);
  for(int i = 0; i < N; i++){
    cin >> t[i];
  }
  for(int i = 0; i < N; i++){
    if(i == (N-1)){
      ans += T;
      continue;
    }
    if(t[i+1] < (ttl+T)){
      ans += (t[i+1]-t[i]);
    }else{
      ans += T;
    }
    ttl+=(t[i+1]-t[i]);
  }

  cout << ans << endl;

}
