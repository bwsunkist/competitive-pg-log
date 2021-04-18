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
  int cnt = 0;

  cin >> N >> K;

  vector<int> A(N);
  for(int i = 0; i < N; i++){
    cin >> A[i];
  }

  cnt = K;
  ans++;
  while(N > cnt){
   cnt += (K-1);
   ans++; 
  }
  cout << ans << endl;
}
