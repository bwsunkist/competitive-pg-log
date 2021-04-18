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
  double T, A;
  int ans = 0;
  double mind = 100000.0;

  cin >> N;
  cin >> T >> A;

  vector<double> H(N);
  for(int i = 0; i < N; i++){
    cin >> H[i];
  }
  for(int i = 0; i < N; i++){
    if(mind > abs((T-0.006*H[i]) - A)){
      mind = abs((T-0.006*H[i]) - A);
      ans = i+1;
    }
  }

  cout << ans <<endl;
}
