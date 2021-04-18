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
  int n, k;
 
  cin >> n >> k;

  vector<long long> h(n);
  for(int i = 0; i < n; i++){
    cin >> h[i];
  }
  sort(h.begin(), h.end());

  long long ttl = 0;
  for(int i = 0; i < (n-k); i++){
    ttl += h[i];
  }

  cout << ttl << endl;
}
