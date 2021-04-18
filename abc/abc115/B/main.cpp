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
  vector<int> p(N);
  for(int i = 0; i < N; i++){
    cin >> p[i];
  }

  sort(p.begin(), p.end());

  for(int i = 0; i < N-1; i++){
    ans += p[i];
  }
  ans += p[N-1]/2;

  cout << ans << endl;
}
