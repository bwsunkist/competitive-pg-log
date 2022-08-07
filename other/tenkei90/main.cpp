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

int check(vector<long long> a, long long m, int K, long long L) {
  int a_size = a.size();
  int split_num = 1;
  long long temp_sum = 0;

  int last_i = 0;
  for(int i = 0; i < a_size; i++){
    last_i = i;
    long long diff = 0;

    if(i == 0) diff = a[0];
    else diff = a[i] - a[i-1];

    temp_sum += diff;

    if (temp_sum > m) {
      temp_sum = 0;
      split_num++;
    }
  }
  // last parts
  temp_sum += L - a[a_size-1];
  if (temp_sum > m) {
    temp_sum = 0;
    split_num++;
  }

  // 分割数がKより小さい場合、mが大きすぎる
  if (split_num < K + 1) return -2;

  // 分割数がKより大きい場合、mが小さすぎる
  if (split_num > K + 1) return -1;

  // 最後尾がK以下なら　mが大きすぎる
  if (temp_sum < m) return -2;

  return 1;
}

long long bynarySearch(vector<long long> a, long long L, int K){
  long long left = -1;
  long long right = L;
  while (right - left > 1) {
    long long mid = left + (right - left) / 2;
    int cheked = check(a, mid, K, L);
    if (cheked == -2) right = mid;
    else if (cheked == 1) return mid;
    else left = mid;
  }
  return right;
}

int main() {
  long long  N, L, K;

  cin >> N >> L;
  cin >> K;

  vector<long long> a(N);
  for(int i = 0; i < N; i++){
    cin >> a[i];
  }

  long long result = bynarySearch(a, L, K);
  cout << result << endl;
}
