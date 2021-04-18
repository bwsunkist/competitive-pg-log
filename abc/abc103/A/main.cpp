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
  int ans = 0;
  vector<int> A(3);
  for(int i = 0; i < 3; i++){
    cin >> A[i];
  }
   sort(A.begin(), A.end());

  ans = abs(A[2] - A[1]);
  ans += abs(A[1] - A[0]);

  cout << ans << endl;
}
