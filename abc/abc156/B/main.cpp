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
  long long N, K;
  int ans = 0;
  string s;

  cin >> N >> K;

  vector<int> a;
  long long n = N;
  while(n > 0){
    a.push_back(n%K);
    n = n/K;
  }
  cout << a.size() << endl;
}
