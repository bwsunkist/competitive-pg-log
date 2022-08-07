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

  cin >> N >> K;

  vector<int> x(N);
  for(int i = 0; i < N; i++){
    cin >> x[i];
  }

  int moved_sum = 0;
  for(int i = 0; i < N; i++){
    int zero_ = x[i];
    int k_ = abs(K - x[i]);
    int moved = min(zero_, k_) * 2;
    moved_sum += moved;
  }

  cout << moved_sum << endl;
}
