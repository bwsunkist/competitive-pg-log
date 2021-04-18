#include<iostream>
#include<vector>
#include<cstdio>
#include<string>
#include<algorithm>
#include<string.h>
#include <iomanip>
using namespace std;

int main() {
  int N;
  double ans = 0;
  string s;

  cin >> N;

  vector<double> x(N);
  vector<string> u(N);
  for(int i = 0; i < N; i++){
    cin >> x[i] >> u[i];
  }

  for(int i = 0; i < N; i++){
    s = u[i];
    if(s == "JPY"){
      ans += x[i];
    }else if(s == "BTC"){
      ans += x[i]*380000.0;
    }
  }

  cout << fixed;
  cout << setprecision(5) << ans << endl;

}
