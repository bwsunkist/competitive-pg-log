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
  int N;
  long long ans =0;
 
  cin >> N;

  vector<long long> a(N);
  vector<long long> c(N, 0);
  for(int i = 0; i < N; i++){
    cin >> a[i];
  }
  for(int i = 0; i < N; i++){
    long long tmp = a[i];
    while(tmp%2 == 0){
      tmp = tmp/2;
      c[i]++;
    }
  }
  for(int i = 0; i < N; i++){
    ans += c[i];
  }
  cout << ans << endl;
}
