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
  int N, X;
  string s;
  int used = 0;

  cin >> N >> X;

  vector<int> m(N);
  for(int i = 0; i < N; i++){
    cin >> m[i];
    used += m[i];
  }

  sort(m.begin(), m.end());
  int min = m[0];

  int remind = X - used;
  int re = remind / min;
  cout << N + re << endl;
}
