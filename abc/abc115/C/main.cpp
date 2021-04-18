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
  long long  N, K;
  long long ans = 1000000001;
  long long minh = 1000000001;
  long long maxh = 0;
  string s;

  cin >> N >> K;

  vector<long long> h(N);
  for(int i = 0; i < N; i++){
    cin >> h[i];
  }
  sort(h.begin(), h.end());
  
  for(int i = 0; i < N; i++){
    
    if(i >= (K-1)){
      ans = min(ans, h[i] - h[i-(K-1)]);
    }
  }

  cout << ans << endl;

}
