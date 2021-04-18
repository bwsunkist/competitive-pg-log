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

  cin >> N;

  vector<long long > a(N);
  vector<long long > b(N);
  vector<long long > a_(N);
  vector<long long > b_(N);
  for(int i = 0; i < N; i++){
    cin >> a[i] >> b[i];
    a_[i] = a[i];
    b_[i] = b[i];
  }

  sort(a_.begin(), a_.end());
  sort(b_.begin(), b_.end());
  long long in = a_[N/2];
  long long out = b_[N/2];
  // cout << "入口?:  " << a_[N/2] << endl;
  // cout << "出口?:  " << b_[N/2] << endl;

  long long ans = 0;
  for(int i = 0; i < N; i++){
    //入り口からAまで
    ans += abs(a_[i] - in);
    //aからbまで
    ans += abs(a_[i] - b_[i]);
    //ｂから出口まで
    ans += abs(b_[i] - out);
  }
  cout << ans << endl;

}
