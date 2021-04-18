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

  int N = 5;
  int cN = 1;
  int ans = 0;

  vector<int> a(N);
  for(int i = 0; i < N; i++){
    cin >> a[i];
  }
  sort(a.begin(), a.end());
  cout << max((a[0]+a[3]+a[4]), (a[1]+a[2]+a[4])) << endl;
}