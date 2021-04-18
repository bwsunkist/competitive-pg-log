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
  int ans = 0;

  cin >> N;

  vector<int> d(N);
  for(int i = 0; i < N; i++){
    cin >> d[i];
  }

  for(int i = 0; i < N; i++){
    for(int j = i+1; j < N; j++){
      ans += d[i] * d[j];
    }
  }

  cout << ans << endl;
}
